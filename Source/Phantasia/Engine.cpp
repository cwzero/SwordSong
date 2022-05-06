#include "Phantasia/Engine.hpp"
#include "Phantasia/Game.hpp"
#include "Phantasia/KeyEvent.hpp"
#include "Phantasia/Render/Window.hpp"
#include "Phantasia/Render/GLSurface.hpp"

using namespace Phantasia;
using namespace Phantasia::Render;

Engine::Engine(GameContext* context, GameConstructor gc) : context(context) {
	this->game = std::unique_ptr<Game>{gc()};
	this->window = std::make_unique<Window>();
}

Engine::~Engine() {

}

Game& Engine::getGame() {
	return *game;
}

Window& Engine::getWindow() {
	return *window;
}

void Engine::initialize() {
	getWindow().setListener(this);
	getWindow().initialize();
    getWindow().open();
	getWindow().makeCurrent();
}

void Engine::shutdown() {
    getWindow().shutdown();
}

void Engine::run() {
	initialize();

	while (loop()) {}

	shutdown();
}

bool Engine::loop() {
	getWindow().clear();
	getWindow().processInput();

	double delta = getWindow().getDelta();
	static double accumulator = 0;
	accumulator += delta;

	while (accumulator >= 20) {
		update();
		accumulator -= 20;
	}

	render(accumulator / 20);

	getWindow().swapBuffers();
	return !getWindow().shouldClose();
}

void Engine::update() {
	getGame().update(*context);
}

void Engine::render(double delta) {
	getGame().render(*context, delta);
	getWindow().drawGrid();
}

bool Engine::handleKey(Key key) {
	return getGame().handleKey(key);
}