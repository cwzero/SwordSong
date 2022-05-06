#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"
#include "Phantasia/Math/TwoD/Rect2D.hpp"

namespace Phantasia::Grid::TwoD {
    template<typename T>
    class Grid2D : public Math::TwoD::Rect2D {
    public:
        Grid2D(int width, int height);
        Grid2D(int x, int y, int width, int height);
        Grid2D(Math::TwoD::Point2D location, Math::TwoD::Size2D size);

        T* get(int x, int y) const;
        inline T* get(Math::TwoD::Point2D pos) const { return get(pos.x, pos.y); }

        T* set(int x, int y, T& t);
        inline T* set(Math::TwoD::Point2D pos, T& t) const { return set(pos.x, pos.y, t); }
    private:
        T*** grid;
    };
}