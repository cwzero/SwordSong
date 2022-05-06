#pragma once

#include "Phantasia/Math/ThreeD/Point3D.hpp"
#include "Phantasia/Math/ThreeD/Size3D.hpp"
#include "Phantasia/Math/ThreeD/Rect3D.hpp"

namespace Phantasia::Grid::ThreeD {
    template<typename T>
    class Grid3D {
    public:
        virtual T* get(int x, int y, int z) const = 0;
        virtual inline T* get(Math::ThreeD::Point3D pos) const { return get(pos.x, pos.y, pos.z); }

        virtual T* set(int x, int y, int z, T& t) = 0;
        virtual inline T* set(Math::ThreeD::Point3D pos, T& t) { return set(pos.x, pos.y, pos.z, t); }
    };
}