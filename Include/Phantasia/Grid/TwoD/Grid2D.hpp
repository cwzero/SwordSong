#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"
#include "Phantasia/Math/TwoD/Rect2D.hpp"

namespace Phantasia::Grid::TwoD {
    template<typename T>
    class Grid2D {
    public:
        virtual T* get(int x, int y) const = 0;
        virtual inline T* get(Math::TwoD::Point2D pos) const { return get(pos.x, pos.y); }

        virtual T* set(int x, int y, T& t) = 0;
        virtual inline T* set(Math::TwoD::Point2D pos, T& t) { return set(pos.x, pos.y, t); }
    };
}