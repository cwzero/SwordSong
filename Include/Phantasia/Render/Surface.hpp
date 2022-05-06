#pragma once

#include "Phantasia/Render/Tile.hpp"
#include "Phantasia/Math/TwoD/Container2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"

namespace Phantasia::Render {
    class Surface : public Phantasia::Math::TwoD::Container2D {
    public:
        Surface(int width, int height);

        virtual void drawTile(ColoredTile& tile, int x, int y) = 0;
        virtual bool contains(int x, int y) const override;

        inline int getWidth() const { return this->width; }
        inline int getHeight() const { return this->height; }
        inline Phantasia::Math::TwoD::Size2D getSize() const { return {width, height}; }

        const int width, height;
    };
}