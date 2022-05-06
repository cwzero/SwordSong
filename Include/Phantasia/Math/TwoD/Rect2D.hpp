#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"
#include "Phantasia/Math/TwoD/Container2D.hpp"

namespace Phantasia::Math::TwoD {
    class Rect2D : public Container2D {
    public:
        Rect2D(int x, int y, int width, int height);
        Rect2D(Point2D location, Size2D size);

        inline int getWidth() const { return width; }
        inline int getHeight() const { return height; }
        inline Size2D getSize() const { return {width, height}; }

        inline int getX() const { return x; }
        inline int getY() const { return y; }
        inline Point2D getLocation() const { return {x, y}; }

        virtual bool contains(int x, int y) const override;

        const int x, y;
        const int width, height;
    };
}