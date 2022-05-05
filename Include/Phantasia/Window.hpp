#pragma once

#include <memory>
#include "Phantasia/KeyEvent.hpp"

struct GLFWwindow;

namespace Phantasia {
	class GLSurface;
	class TileGrid2D;
    class Window {
    public:
        Window();
        ~Window();

		void Initialize();
        void Open();
		void Shutdown();

		void MakeCurrent();
		void Clear();
		double GetDelta();
		void SwapBuffers();
		void ProcessInput();

		void DrawGrid();
		void GetSize(int *width, int *height);

		bool ShouldClose();

		inline void SetListener(KeyListener* listener) {
			this->listener = listener;
		}

		inline GLSurface& GetSurface() {
			return *surface;
		}

		inline TileGrid2D& GetGrid() {
			return *grid;
		}
    private:
        struct GLFWwindow* window;
		KeyListener* listener;
		std::unique_ptr<GLSurface> surface;
		std::unique_ptr<TileGrid2D> grid;

		void handleKeyPress(GLFWwindow* window, int key, int scancode, int action, int mods);
    };
}