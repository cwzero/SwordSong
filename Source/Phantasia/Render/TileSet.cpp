#include "Phantasia/Build.hpp"
#include "Phantasia/Render/TileSet.hpp"
#include "Phantasia/Render/Model.hpp"
#include "Phantasia/Render/Shader.hpp"

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

#include <iostream>

#include <glad/gl.h>
#include <GLFW/glfw3.h>

using namespace Phantasia::Render;

TileSet::TileSet(const char* fileName, int gridWidth, int gridHeight) {
	this->fileName = fileName;
	model = std::make_unique<Model>();
	shader = std::make_unique<Shader>((float)gridWidth, (float)gridHeight);
}

TileSet::~TileSet() {
}

void TileSet::load() {
	model->initialize();

	shader->load((SourcePath + "/Resources/Shaders/shader.vs").c_str(), (SourcePath + "/Resources/Shaders/shader.fs").c_str());

	int width, height, comp;
	unsigned char* image = stbi_load((SourcePath + "/Resources/Textures/" + std::string(fileName)).c_str(), &width, &height, &comp, STBI_rgb_alpha);

	if (image == 0) {
		std::cout << stbi_failure_reason() << std::endl;
		exit(1);
	}

	if (image != 0) {

		for (int x = 0; x < 16; x++) {
			for (int y = 0; y < 16; y++) {
				glGenTextures(1, &texture[x][y]);
				glBindTexture(GL_TEXTURE_2D, texture[x][y]);

				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

				glPixelStorei(GL_UNPACK_ROW_LENGTH, 256);
				glPixelStorei(GL_UNPACK_SKIP_PIXELS, x * 16);
				glPixelStorei(GL_UNPACK_SKIP_ROWS, y * 16);
				glPixelStorei(GL_UNPACK_ALIGNMENT, 0);

				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 16, 16, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
				glGenerateMipmap(GL_TEXTURE_2D);
			}
		}

		glBindTexture(GL_TEXTURE_2D, 0);

		stbi_image_free(image);
	}
}

void TileSet::drawTile(int tx, int ty, float r, float g, float b, int x, int y) {
	glBindTexture(GL_TEXTURE_2D, texture[tx][ty]);
	shader->use();

	float xu = (1.0f / 16.0f);
	float yu = (1.0f / 16.0f);

	shader->setVec3("color", r, g, b);
	shader->setPosition(((float)x * xu), ((float)y * yu));
	model->render();
}