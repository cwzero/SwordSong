#include "Phantasia/KeyEvent.hpp"

#include <glad/gl.h>
#include <GLFW/glfw3.h>

using namespace Phantasia;

Key Phantasia::getKey(GLFWwindow* window, int key, int scancode, int action, int mods) {
	switch (key) {
	case GLFW_KEY_UP:
		return Key::Up;
		break;
	case GLFW_KEY_RIGHT:
		return Key::Right;
		break;
	case GLFW_KEY_DOWN:
		return Key::Down;
		break;
	case GLFW_KEY_LEFT:
		return Key::Left;
		break;
	case GLFW_KEY_COMMA:
		return Key::Comma;
		break;
	case GLFW_KEY_PERIOD:
		return Key::Period;
	default:
		return Key::Unknown;
	}

	return Key::Unknown;
}