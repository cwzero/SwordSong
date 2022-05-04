#pragma once

namespace Phantasia {
    class Point2D {
    public:
        Point2D(int x, int y) : x(x), y(y) {}

        inline int GetX() const { return x; }
        inline int GetY() const { return y; }
        inline void GetPoint(int* x, int* y) const {
            *x = this->x;
            *y = this->y;
        }

        const int x, y;
    };
}