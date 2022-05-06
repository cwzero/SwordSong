#pragma once

namespace Phantasia::Math::TwoD {
    class Point2D {
    public:
        Point2D(int x, int y) : x(x), y(y) {}

        inline int getX() const { return x; }
        inline int getY() const { return y; }

        const int x, y;
    };
}