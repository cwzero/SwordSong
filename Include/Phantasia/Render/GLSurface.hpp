#pragma once

#include <memory>

#include "Phantasia/Render/BasicSurface2D.hpp"

namespace Phantasia::Render {
    class TileSet;
    class GLSurface : public BasicSurface2D {
    public:
        GLSurface(int width, int height);

        virtual void drawTile(ColoredTile& tile, int x, int y) override;
    private:
        std::unique_ptr<TileSet> tileSet;
    };
}