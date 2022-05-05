#include "Phantasia/GLSurface.hpp"
#include "Phantasia/TileSet.hpp"

using namespace Phantasia;

GLSurface::GLSurface(int width, int height) : width(width), height(height) {
    tileSet = std::make_unique<TileSet>("16x16-sb-ascii.png", width / 16, height / 16);
    tileSet->Load();
}

void GLSurface::DrawTile(ColoredTile* tile, int x, int y) {
    tileSet->DrawTile(tile->tx, tile->ty, tile->color.r, tile->color.g, tile->color.b, x, y);
}

void GLSurface::DrawTile(ColoredTile* tile, Point2D loc) {
    tileSet->DrawTile(tile->tx, tile->ty, tile->color.r, tile->color.g, tile->color.b, loc.x, loc.y);
}