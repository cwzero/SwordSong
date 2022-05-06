#pragma once

#include <memory>
#include "Phantasia/KeyEvent.hpp"
#include "Phantasia/Render/Surface.hpp"
#include "Phantasia/Render/GLSurface.hpp"

struct GLFWwindow;

namespace Phantasia::Render {
    class Window {
    public:
        Window();
        ~Window();

		void initialize();
        void open();
		void shutdown();

		void makeCurrent();
		void clear();
		double getDelta();
		void swapBuffers();
		void processInput();

		void drawGrid();
		void getSize(int *width, int *height);

		bool shouldClose();

		inline void setListener(KeyListener* listener) {
			this->listener = listener;
		}

		inline Surface& getSurface() {
			return *surface;
		}
    private:
        struct GLFWwindow* window;
		KeyListener* listener;
		std::unique_ptr<GLSurface> surface;

		void handleKeyPress(GLFWwindow* window, int key, int scancode, int action, int mods);
    };
}