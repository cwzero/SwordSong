#pragma once

#include "Phantasia/Math/ThreeD/Container3D.hpp"

namespace Phantasia::Math::ThreeD {
    class Size3D : public Container3D {
    public:
        Size3D(int width, int height, int depth);

        inline int getWidth() const { return width; }
        inline int getHeight() const { return height; }
        inline int getDepth() const { return depth; }

        virtual bool contains(int x, int y, int z) const override;

        const int width, height, depth;
    };
}