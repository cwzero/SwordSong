#pragma once

#include "Phantasia/Math/TwoD/Point2D.hpp"
#include "Phantasia/Math/TwoD/Size2D.hpp"
#include "Phantasia/Math/TwoD/Rect2D.hpp"

#include "Phantasia/Grid/TwoD/Grid2D.hpp"

namespace Phantasia::Grid::TwoD {
    template<typename T>
    class BasicGrid2D : public Grid2D<T>, public Math::TwoD::Rect2D {
    public:
        BasicGrid2D(int width, int height);
        BasicGrid2D(int x, int y, int width, int height);
        BasicGrid2D(Math::TwoD::Point2D location, Math::TwoD::Size2D size);

        virtual T* get(int x, int y) const override;
        virtual inline T* get(Math::TwoD::Point2D pos) const override { return get(pos.x, pos.y); }

        virtual T* set(int x, int y, T& t) override;
        virtual inline T* set(Math::TwoD::Point2D pos, T& t) override { return set(pos.x, pos.y, t); }
    private:
        T*** grid;
    };
}