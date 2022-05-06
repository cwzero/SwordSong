#pragma once

#include "Phantasia/Render/Tile.hpp"
#include "Phantasia/Math/ThreeD/Container3D.hpp"
#include "Phantasia/Math/ThreeD/Point3D.hpp"
#include "Phantasia/Math/ThreeD/Size3D.hpp"

namespace Phantasia::Render {
    class Surface3D {
    public:
        virtual void drawTile(ColoredTile& tile, int x, int y, int z) = 0;
        virtual void drawTile(ColoredTile& tile, Point3D pos) {
            drawTile(tile, pos.x, pos.y, pos.z);
        }
    };
}