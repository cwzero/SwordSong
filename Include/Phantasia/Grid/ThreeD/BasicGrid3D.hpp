#pragma once

#include "Phantasia/Math/ThreeD/Point3D.hpp"
#include "Phantasia/Math/ThreeD/Size3D.hpp"
#include "Phantasia/Math/ThreeD/Rect3D.hpp"

#include "Phantasia/Grid/ThreeD/Grid3D.hpp"

namespace Phantasia::Grid::ThreeD {
    template<typename T>
    class BasicGrid3D : public Grid3D<T>, public Math::ThreeD::Rect3D {
    public:
        BasicGrid3D(int width, int height, int depth);
        BasicGrid3D(int x, int y, int z, int width, int height, int depth);
        BasicGrid3D(Math::ThreeD::Point3D location, Math::ThreeD::Size3D size);

        virtual T* get(int x, int y, int z) const override;
        virtual inline T* get(Math::ThreeD::Point3D pos) const override { return get(pos.x, pos.y, pos.z); }

        virtual T* set(int x, int y, int z, T& t) override;
        virtual inline T* set(Math::ThreeD::Point3D pos, T& t) override { return set(pos.x, pos.y, pos.z, t); }
    private:
        T**** grid;
    };
}