#pragma once

namespace Phantasia {
    struct Point3D {
        Point3D(int x, int y, int z) : x(x), y(y), z(z) {}

        inline int GetX() const { return x; }
        inline int GetY() const { return y; }
        inline int GetZ() const { return z; }

        inline void GetPoint3D(int* x, int* y, int* z) const {
            *x = this->x;
            *y = this->y;
            *z = this->z;
        }

        const int x, y, z;
    };
}