#include "Phantasia/Render/GLSurface.hpp"
#include "Phantasia/Render/TileSet.hpp"

using namespace Phantasia::Render;

GLSurface::GLSurface(int width, int height) : Surface(width, height) {
    tileSet = std::make_unique<TileSet>("16x16-sb-ascii.png", width / 16, height / 16);
    tileSet->load();
}

void GLSurface::drawTile(ColoredTile* tile, int x, int y) {
    tileSet->drawTile(tile->x, tile->y, tile->color.r, tile->color.g, tile->color.b, x, y);
}