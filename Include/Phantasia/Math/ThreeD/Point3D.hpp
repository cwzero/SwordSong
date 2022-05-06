#pragma once

namespace Phantasia {
    class Point3D {
    public:
        Point3D(int x, int y, int z) : x(x), y(y), z(z) {}

        inline int getX() const { return x; }
        inline int getY() const { return y; }
        inline int getZ() const { return z; }

        const int x, y, z;
    };
}