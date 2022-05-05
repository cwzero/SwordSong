#include "SwordSong/SwordSongGame.hpp"
#include "Phantasia/Surface.hpp"
#include "Phantasia/TileGrid2D.hpp"

using namespace Phantasia;
using namespace SwordSong;

SwordSongGame::SwordSongGame() : Game() {

}

SwordSongGame::~SwordSongGame() {

}

void SwordSongGame::Update() {

}

void SwordSongGame::Render(TileGrid2D& grid, double delta) {
	auto tile = new ColoredTile{0, 4, {1, 1, 1}};
	grid.DrawTile(tile, {0, 0});
}

bool SwordSongGame::HandleKey(Key key) {
	return false;
}