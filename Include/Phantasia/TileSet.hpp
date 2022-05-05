#pragma once

#include <memory>
#include "Phantasia/Tile.hpp"

namespace Phantasia {
	class Model;
	class Shader;

	class TileSet {
	public:
		TileSet(const char* fileName, int gridWidth, int gridHeight);
		~TileSet();

		void Load();
		void Use();

		void DrawTile(int tx, int ty, float r, float g, float b, float x, float y);

		unsigned int texture[16][16];
	private:
		const char* fileName;
		std::unique_ptr<Model> model;
		std::unique_ptr<Shader> shader;
	};
}