#include "Phantasia/TileGrid2D.hpp"

#include <iostream>

using namespace Phantasia;

TileGrid2D::TileGrid2D(int width, int height) {
    this->width = width;
    this->height = height;
    this->grid = new ColoredTile**[width];
    for (int x = 0; x < width; x++) {
        this->grid[x] = new ColoredTile*[height];
        for (int y = 0; y < height; y++) {
            this->grid[x][y] = nullptr;
        }
    }
}

TileGrid2D::~TileGrid2D() {
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            delete this->grid[x][y];
        }
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

void TileGrid2D::DrawTile(ColoredTile* tile, int x, int y) {
    if (IsValid(x, y)) {
        grid[x][y] = tile;
    }
}

void TileGrid2D::DrawTile(ColoredTile* tile, Point2D loc) {
    if (IsValid(loc)) {
        grid[loc.x][loc.y] = tile;
    }
}

void TileGrid2D::Draw(Surface& surface, int offsetX, int offsetY) {
    int xm = width / 2;
    int ym = height / 2;
    for (int x = -xm; x < xm; x++) {
        for (int y = -ym; y < ym; y++) {
            if (grid[x + xm][y + ym] != nullptr) {
                surface.DrawTile(grid[x + xm][y + ym], x + xm + offsetX, y + ym + offsetY);
            }
        }
    }
}

void TileGrid2D::Draw(Surface& surface, Point2D offset) {
    int xm = width / 2;
    int ym = height / 2;
    for (int x = -xm; x < xm; x++) {
        for (int y = -ym; y < ym; y++) {
            if (grid[x + xm][y + ym] != nullptr) {
                surface.DrawTile(grid[x + xm][y + ym], x + xm + offset.x, y + ym + offset.y);
            }
        }
    }
}