#include "Phantasia/Engine.hpp"
#include "Phantasia/Game.hpp"
#include "Phantasia/KeyEvent.hpp"
#include "Phantasia/Render/Window.hpp"
#include "Phantasia/Render/GLSurface.hpp"

using namespace Phantasia;
using namespace Phantasia::Render;

Engine::Engine(GameConstructor gameCon) {
	this->game = std::unique_ptr<Game>{gameCon()};
	this->window = std::make_unique<Window>();
}

Engine::~Engine() {

}

void Engine::initialize() {
	window->setListener(this);
	window->initialize();
    window->open();
	window->makeCurrent();
}

void Engine::shutdown() {
    window->shutdown();
}

void Engine::run() {
	initialize();

	while (loop()) {}

	shutdown();
}

bool Engine::loop() {
	window->clear();
	window->processInput();

	double delta = window->getDelta();
	static double accumulator = 0;
	accumulator += delta;

	while (accumulator >= 20) {
		update();
		accumulator -= 20;
	}

	render(accumulator / 20);

	window->swapBuffers();
	return !window->shouldClose();
}

void Engine::update() {
	game->update();
}

void Engine::render(double delta) {
	game->render(delta);
	window->drawGrid();
}

bool Engine::handleKey(Key key) {
	return game->handleKey(key);
}