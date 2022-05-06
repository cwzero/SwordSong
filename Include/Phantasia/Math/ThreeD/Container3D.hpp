#pragma once

#include "Phantasia/Math/ThreeD/Point3D.hpp"

namespace Phantasia::Math::ThreeD {
    class Container3D {
    public:
        virtual bool contains(int x, int y, int z) const = 0;
        virtual bool contains(Point3D pos) const {
            return contains(pos.x, pos.y, pos.z);
        }
    };
}