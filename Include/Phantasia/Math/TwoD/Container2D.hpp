#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"

namespace Phantasia::Math::TwoD {
    class Container2D {
    public:
        virtual bool contains(int x, int y) const = 0;
        virtual bool contains(Point2D pos) const {
            return contains(pos.x, pos.y);
        }
    };
}