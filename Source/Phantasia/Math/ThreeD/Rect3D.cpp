#include "Phantasia/Math/ThreeD/Rect3D.hpp"

using namespace Phantasia::Math::ThreeD;

Rect3D::Rect3D(int x, int y, int z, int width, int height, int depth) : x(x), y(y), z(z), width(width), height(height), depth(depth) {

}

Rect3D::Rect3D(Point3D location, Size3D size) : Rect3D(location.x, location.y, location.z, size.width, size.height, size.depth) {

}

bool Rect3D::contains(int x, int y, int z) const {
    return getSize().contains(x, y, z);
}