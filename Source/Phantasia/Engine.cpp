#include "Phantasia/Engine.hpp"
#include "Phantasia/Game.hpp"
#include "Phantasia/KeyEvent.hpp"
#include "Phantasia/Window.hpp"

using namespace Phantasia;

Engine::Engine(GameConstructor gameCon) {
	this->game = std::unique_ptr<Game>{gameCon()};
	this->window = std::make_unique<Window>();
}

Engine::~Engine() {

}

void Engine::Initialize() {
	window->SetListener(this);
	window->Initialize();
    window->Open();
	window->MakeCurrent();
}

void Engine::Shutdown() {
    window->Shutdown();
}

void Engine::Run() {
	Initialize();

	while (Loop()) {}

	Shutdown();
}

bool Engine::Loop() {
	window->Clear();
	window->ProcessInput();

	double delta = window->GetDelta();
	static double accumulator = 0;
	accumulator += delta;

	while (accumulator >= 20) {
		Update();
		accumulator -= 20;
	}

	Render(accumulator / 20);

	window->SwapBuffers();
	return !window->ShouldClose();
}

void Engine::Update() {
	game->Update();
}

void Engine::Render(double delta) {
	game->Render(delta);
}

bool Engine::HandleKey(Key key) {
	return game->HandleKey(key);
}