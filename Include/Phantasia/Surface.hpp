#pragma once

#include "Phantasia/Math.hpp"
#include "Phantasia/Tile.hpp"

namespace Phantasia {
    class Surface {
    public:
        virtual int GetWidth() const = 0;
        virtual int GetHeight() const = 0;
        virtual void GetSize(int* width, int* height) const = 0;
        virtual Size2D GetSize() const = 0;

        virtual void DrawTile(ColoredTile* tile, int x, int y) = 0;
        virtual void DrawTile(ColoredTile* tile, Point2D loc) = 0;
    private:
    };
}