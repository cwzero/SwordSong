#pragma once

#include "Phantasia/Math/ThreeD/Point3D.hpp"
#include "Phantasia/Math/ThreeD/Size3D.hpp"
#include "Phantasia/Math/ThreeD/Container3D.hpp"

namespace Phantasia::Math::ThreeD {
    class Rect3D : public Container3D {
    public:
        Rect3D(int x, int y, int z, int width, int height, int depth);
        Rect3D(Point3D location, Size3D size);

        inline int getWidth() const { return width; }
        inline int getHeight() const { return height; }
        inline int getDepth() const { return depth; }
        inline Size3D getSize() const { return {width, height, depth}; }

        inline int getX() const { return x; }
        inline int getY() const { return y; }
        inline int getZ() const { return z; }
        inline Point3D getLocation() const { return {x, y, z}; }

        virtual bool contains(int x, int y, int z) const override;

        const int x, y, z;
        const int width, height, depth;
    };
}