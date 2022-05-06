#pragma once

#include "Phantasia/Math/ThreeD/Point3D.hpp"
#include "Phantasia/Math/ThreeD/Size3D.hpp"
#include "Phantasia/Math/ThreeD/Rect3D.hpp"

namespace Phantasia::Grid::ThreeD {
    template<typename T>
    class Grid3D : public Math::ThreeD::Rect3D {
    public:
        Grid3D(int width, int height, int depth);
        Grid3D(int x, int y, int z, int width, int height, int depth);
        Grid3D(Math::ThreeD::Point3D location, Math::ThreeD::Size3D size);

        T* get(int x, int y, int z) const;
        inline T* get(Math::ThreeD::Point3D pos) const { return get(pos.x, pos.y, pos.z); }

        T* set(int x, int y, int z, T& t);
        inline T* set(Math::ThreeD::Point3D pos, T& t) const { return set(pos.x, pos.y, pos.z, t); }
    private:
        T**** grid;
    };
}