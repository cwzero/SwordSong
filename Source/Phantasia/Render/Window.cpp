#include "Phantasia/Render/Window.hpp"
#include "Phantasia/Render/TileSet.hpp"
#include "Phantasia/Render/GLSurface.hpp"

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include <iostream>

using namespace Phantasia::Render;

void glErrorCallback(int err, const char* msg) {
	std::cerr << "Error: " << msg << std::endl;
}

void init() {
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwSetErrorCallback(glErrorCallback);

	if (!glfwInit())
		exit(EXIT_FAILURE);
}

GLFWwindow* openWindow() {
	GLFWmonitor* monitor = glfwGetPrimaryMonitor();
	const GLFWvidmode* mode = glfwGetVideoMode(monitor);

	glfwWindowHint(GLFW_RED_BITS, mode->redBits);
	glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
	glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
	glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);

	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	int w = (int)(mode->width * 0.8);
	if ((w % 16) != 0) {
		w += (16 - (w % 16));
	}

	int h = (int)(mode->height * 0.8);
	if ((h % 16) != 0) {
		h += (16 - (h % 16));
	}

	GLFWwindow* window = glfwCreateWindow(w, h, "Sword Song", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	int version = gladLoadGL(glfwGetProcAddress);
	if (version == 0) {
		printf("Failed to initialize OpenGL context\n");
		exit(1);
	}

    return window;
}

Window::Window() {
	
}

Window::~Window() {

}

void Window::initialize() {
    init();
}

void Window::open() {
    window = openWindow();

	int width, height;
	getSize(&width, &height);
	surface = std::make_unique<GLSurface>(width, height);
	//grid = std::make_unique<TileGrid2D>(width / 16, height / 16);

    glfwSetWindowUserPointer(window, this);

	auto func = [](GLFWwindow* window, int key, int scancode, int action, int mods) {
		static_cast<Window*>(glfwGetWindowUserPointer(window))->handleKeyPress(window, key, scancode, action, mods);
	};

	glfwSetKeyCallback(window, func);
}

void Window::handleKeyPress(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS || action == GLFW_REPEAT) {
		if (!listener || !listener->handleKey(getKey(window, key, scancode, action, mods))) {
			if (action == GLFW_PRESS && key == GLFW_KEY_ESCAPE) {
				glfwSetWindowShouldClose(window, GLFW_TRUE);
			}
		}
	}
}


void Window::shutdown() {
	glfwDestroyWindow(window);
	glfwTerminate();
}

void Window::makeCurrent() {
	glfwMakeContextCurrent(window);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glfwSwapInterval(1);

	int width, height;
	getSize(&width, &height);
	glViewport(0, 0, width, height);
}

void Window::clear() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}

double Window::getDelta() {
	static double lastTime = 0;
	double currentTime = glfwGetTime();
	double delta = (currentTime - lastTime) * 1000;
	lastTime = currentTime;
	return delta;
}

void Window::drawGrid() {
	//grid->Draw(GetSurface(), {0, 0});
}

void Window::swapBuffers() {
	glfwSwapBuffers(window);
}

void Window::processInput() {
	glfwPollEvents();
}

bool Window::shouldClose() {
	return glfwWindowShouldClose(window);
}

void Window::getSize(int* width, int* height) {
	glfwGetWindowSize(window, width, height);
}