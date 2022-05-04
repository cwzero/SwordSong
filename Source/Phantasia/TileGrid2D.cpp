#include "Phantasia/TileGrid2D.hpp"

using namespace Phantasia;

TileGrid2D::TileGrid2D(int width, int height) {
    this->width = width;
    this->height = height;
    this->grid = new ColoredTile*[width];
    for (int x = 0; x < width; x++) {
        this->grid[x] = new ColoredTile[height];
    }
}

TileGrid2D::~TileGrid2D() {
    for (int x = 0; x < width; x++) {
        delete[] this->grid[x];
    }
    delete[] this->grid;
}

bool TileGrid2D::IsValid(int x, int y) {
    return x >= 0 && x < width &&
        y >= 0 && y < height;
}

bool TileGrid2D::IsValid(Point2D loc) {
    return loc.x >= 0 && loc.x < width &&
        loc.y >= 0 && loc.y < height;
}

void TileGrid2D::DrawTile(ColoredTile tile, int x, int y) {
    if (IsValid(x, y)) {
        grid[x][y] = tile;
    }
}

void TileGrid2D::DrawTile(ColoredTile tile, Point2D loc) {
    if (IsValid(loc)) {
        grid[loc.x][loc.y] = tile;
    }
}

void TileGrid2D::Draw(Surface& surface, int offsetX, int offsetY) {
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            surface.DrawTile(grid[x][y], x + offsetX, y + offsetY);
        }
    }
}

void TileGrid2D::Draw(Surface& surface, Point2D offset) {
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            surface.DrawTile(grid[x][y], x + offset.x, y + offset.y);
        }
    }    
}