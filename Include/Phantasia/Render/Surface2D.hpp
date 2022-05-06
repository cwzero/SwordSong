#pragma once

#include "Phantasia/Render/Tile.hpp"
#include "Phantasia/Math/TwoD/Container2D.hpp"
#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"

namespace Phantasia::Render {
    class Surface2D {
    public:
        virtual void drawTile(ColoredTile& tile, int x, int y) = 0;
        virtual void drawTile(ColoredTile& tile, Math::TwoD::Point2D pos) {
            drawTile(tile, pos.x, pos.y);
        }
    };
}