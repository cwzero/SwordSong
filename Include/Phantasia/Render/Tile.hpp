#pragma once

namespace Phantasia::Render {
    typedef struct Color {
        float r, g, b;
    } Color;

    typedef struct Tile {
        int x, y;
    } Tile;

    typedef struct ColoredTile : Tile {
        Color color;
    } ColoredTile;
}