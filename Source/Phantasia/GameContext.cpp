#include "Phantasia/GameContext.hpp"
#include "Phantasia/Engine.hpp"

using namespace Phantasia;
using namespace Phantasia::Render;

GameContext::GameContext(EngineConstructor ec, GameConstructor gc) {
    this->engine = std::unique_ptr<Engine>(ec(this, gc));
}

Engine& GameContext::getEngine() {
    return *engine;
}

Game& GameContext::getGame() {
    return engine->getGame();
}

Window& GameContext::getWindow() {
    return engine->getWindow();
}

void GameContext::run() {
    engine->run();
}