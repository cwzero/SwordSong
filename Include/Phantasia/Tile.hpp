#pragma once

#include "Phantasia/Math.hpp"

namespace Phantasia {
    typedef struct Color {
        float r, g, b;
    } Color;

    typedef struct Tile {
        int tx, ty;
    } Tile;

    typedef struct ColoredTile : Tile {
        Color color;
    } ColoredTile;
}