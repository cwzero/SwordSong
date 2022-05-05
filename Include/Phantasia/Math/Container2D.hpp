#pragma once

#include "Phantasia/Math/Point2D.hpp"

namespace Phantasia {
    class Container2D {
    public:
        virtual bool contains(int x, int y) = 0;
        virtual bool contains(Point2D pos) = 0;
    };
}