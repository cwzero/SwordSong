#include "Phantasia/Math/ThreeD/Size3D.hpp"

using namespace Phantasia::Math::ThreeD;

Size3D::Size3D(int width, int height, int depth) : width(width), height(height), depth(depth) {}

bool Size3D::contains(int x, int y, int z) const {
    return (x >= 0 && x < width) &&
        (y >= 0 && y < height) &&
        (z >= 0 && z < depth);
}