#include "SwordSong/SwordSong.hpp"
#include "SwordSong/SwordSongGame.hpp"
#include "Phantasia/Engine.hpp"
#include "Phantasia/GameContext.hpp"

#include <iostream>
#include <memory>

using namespace Phantasia;
using namespace SwordSong;

Game* createGame() {
	return new SwordSongGame();
}

Engine* createEngine(GameContext* context, GameConstructor gc) {
	return new Engine(context, gc);
}

int main(int argc, char **argv) {
	std::unique_ptr<GameContext> gc = std::make_unique<GameContext>(createEngine, createGame);

	gc->run();

    return 0;
}