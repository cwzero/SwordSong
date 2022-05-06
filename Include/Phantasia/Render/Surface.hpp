#pragma once

#include "Phantasia/Render/Tile.hpp"

namespace Phantasia::Render {
    class Surface {
    public:
        Surface(int width, int height);

        virtual void drawTile(ColoredTile* tile, int x, int y) = 0;

        const int width, height;
    private:
        virtual bool isValid(int x, int y);
    };
}