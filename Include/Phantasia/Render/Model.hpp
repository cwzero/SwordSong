#pragma once

namespace Phantasia::Render {
	class Model {
	public:
		Model();
		~Model();

		void initialize();
		void render();
	private:
		float width, height;
		unsigned int VBO;
		unsigned int VAO;
		unsigned int EBO;
	};
}