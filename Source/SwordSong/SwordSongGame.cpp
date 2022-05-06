#include "SwordSong/SwordSongGame.hpp"
#include "Phantasia/Render/Surface.hpp"
#include "Phantasia/Render/Window.hpp"

using namespace Phantasia;
using namespace Phantasia::Render;
using namespace SwordSong;

SwordSongGame::SwordSongGame() : Game() {

}

SwordSongGame::~SwordSongGame() {

}

void SwordSongGame::update(GameContext& context) {

}

void SwordSongGame::render(GameContext& context, double delta) {
	auto tile = new ColoredTile({ 0, 4 }, { 1, 1, 1 });
	context.getWindow().getSurface().drawTile(*tile, 0, 0);
}

bool SwordSongGame::handleKey(Key key) {
	return false;
}