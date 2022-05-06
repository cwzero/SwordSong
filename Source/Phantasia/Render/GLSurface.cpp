#include "Phantasia/Render/GLSurface.hpp"
#include "Phantasia/Render/TileSet.hpp"

using namespace Phantasia::Render;

GLSurface::GLSurface(int width, int height) : BasicSurface2D(width, height) {
    tileSet = std::make_unique<TileSet>("16x16-sb-ascii.png", width / 16, height / 16);
    tileSet->load();
}

void GLSurface::drawTile(ColoredTile& tile, int x, int y) {
    if (contains(x, y)) {
        tileSet->drawTile(tile.x, tile.y, tile.r, tile.g, tile.b, x, y);
    }
}