#pragma once

#include "Phantasia/KeyEvent.hpp"

struct GLFWwindow;

namespace Phantasia {
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

		void GetSize(int *width, int *height);

		bool ShouldClose();

		inline void SetListener(KeyListener* listener) {
			this->listener = listener;
		}
    private:
		void handleKeyPress(GLFWwindow* window, int key, int scancode, int action, int mods);
        struct GLFWwindow* window;

		KeyListener* listener;
    };
}