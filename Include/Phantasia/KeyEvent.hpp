#pragma once

struct GLFWwindow;

namespace Phantasia {
	enum class Key {
		Unknown, Up, Right, Down, Left, Comma, Period
	};

	Key getKey(GLFWwindow* window, int key, int scancode, int action, int mods);

    class KeyListener {
    public:
        virtual bool handleKey(Key key) = 0;
    };
}