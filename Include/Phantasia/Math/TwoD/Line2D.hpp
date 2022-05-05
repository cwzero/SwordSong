#pragma once

#include <cmath>
#include "Phantasia/Math/TwoD/Point2D.hpp"

namespace Phantasia::Math::TwoD {
    struct Line2D {
        Line2D(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
        Line2D(Point2D origin, Point2D destination) : Line2D(origin.x, origin.y, destination.x, destination.y) {}

        inline int GetX1() const { return x1; }
        inline int GetY1() const { return y1; }
        inline int GetX2() const { return x2; }
        inline int GetY2() const { return y2; }

        inline Point2D GetOrigin() const {
            return {x1, y1};
        }

        inline Point2D GetDestination() const {
            return {x2, y2};
        }

        double GetLength() const {
            return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        }

        const int x1, y1;
        const int x2, y2;
    };
}