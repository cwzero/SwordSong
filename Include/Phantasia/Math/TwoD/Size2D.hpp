#pragma once

#include "Phantasia/Math/TwoD/Container2D.hpp"

namespace Phantasia::Math::TwoD {
    class Size2D : public Container2D {
    public:
        Size2D(int width, int height);

        inline int getWidth() const { return width; }
        inline int getHeight() const { return height; }

        virtual bool contains(int x, int y) const override;

        const int width, height;
    };
}