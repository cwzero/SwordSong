#include "SwordSong/SwordSong.hpp"
#include "SwordSong/SwordSongGame.hpp"
#include "Phantasia/Engine.hpp"

#include <iostream>
#include <memory>

using namespace Phantasia;
using namespace SwordSong;

Game* createGame() {
	return new SwordSongGame();
}

int main(int argc, char **argv) {
	std::unique_ptr<Engine> engine = std::make_unique<Engine>(createGame);

	engine->run();

    return 0;
}