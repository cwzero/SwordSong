#pragma once

#include "Phantasia/Render/Surface2D.hpp"
#include "Phantasia/Render/Tile.hpp"
#include "Phantasia/Math/TwoD/Container2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"

namespace Phantasia::Render {
    class BasicSurface2D : public Surface2D, public Phantasia::Math::TwoD::Container2D {
    public:
        BasicSurface2D(int width, int height);

        virtual bool contains(int x, int y) const override;

        inline int getWidth() const { return this->width; }
        inline int getHeight() const { return this->height; }
        inline Phantasia::Math::TwoD::Size2D getSize() const { return {width, height}; }

        const int width, height;
    };
}