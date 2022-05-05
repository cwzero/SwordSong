#pragma once

namespace Phantasia::Math::TwoD {
    struct Point2D {
        Point2D(int x, int y) : x(x), y(y) {}

        inline int GetX() const { return x; }
        inline int GetY() const { return y; }
        inline void GetPoint2D(int* x, int* y) const {
            *x = this->x;
            *y = this->y;
        }

        const int x, y;
    };
}