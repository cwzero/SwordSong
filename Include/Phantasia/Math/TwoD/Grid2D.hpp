#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"
#include "Phantasia/Math/TwoD/Rect2D.hpp"

namespace Phantasia::Math::TwoD {
    template <typename T>
    struct Grid2D : public Rect2D {
        Grid2D(int x, int y, int width, int height);
        Grid2D(Point2D loc, Size2D size);

        T& get(Point2D loc);
    private:
        
    };
}