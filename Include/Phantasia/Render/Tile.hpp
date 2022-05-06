#pragma once

namespace Phantasia::Render {
    class Color {
    public:
        Color() : Color(1, 1, 1) {}
        Color(float r, float g, float b) : r(r), g(g), b(b) {}
        Color(const Color& color) : r(color.r), g(color.g), b(color.b) {}

        inline float getR() const { return this->r; }
        inline float getG() const { return this->g; }
        inline float getB() const { return this->b; }

        float r, g, b;
    };

    class Tile {
    public:
        Tile() : Tile(0, 0) {}
        Tile(int x, int y) : x(x), y(y) {}
        Tile(const Tile& tile) : x(tile.x), y(tile.y) {}

        inline int getX() const { return this->x; }
        inline int getY() const { return this->y; }

        const int x, y;
    };

    class ColoredTile : public Tile, public Color {
    public:
        ColoredTile(int x, int y) : Tile(x, y) {}
        ColoredTile(float r, float g, float b) : Color(r, g, b) {}
        ColoredTile(int x, int y, float r, float g, float b) : Tile(x, y), Color(r, g, b) {}
        ColoredTile(const Tile& tile, const Color& color) : Tile(tile), Color(color) {}
        ColoredTile(const Tile& tile, float r, float g, float b) : Tile(tile), Color(r, g, b) {}
        ColoredTile(int x, int y, const Color& color) : Tile(x, y), Color(color) {}
        ColoredTile(const ColoredTile& coloredTile) : Tile(coloredTile), Color(coloredTile) {}
        ColoredTile(const Tile& tile) : Tile(tile) {}
        ColoredTile(const Color& color) : Color(color) {}
    };
}