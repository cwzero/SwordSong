#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"

namespace Phantasia::Math::TwoD {
    struct Container2D {
        virtual bool contains(int x, int y) = 0;
        virtual bool contains(Point2D pos) = 0;
    };
}