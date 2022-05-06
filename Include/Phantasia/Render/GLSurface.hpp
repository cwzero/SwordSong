#pragma once

#include <memory>

#include "Phantasia/Render/Surface.hpp"

namespace Phantasia::Render {
    class TileSet;
    class GLSurface : public Surface {
    public:
        GLSurface(int width, int height);

        virtual void drawTile(ColoredTile* tile, int x, int y) override;
    private:
        std::unique_ptr<TileSet> tileSet;
    };
}