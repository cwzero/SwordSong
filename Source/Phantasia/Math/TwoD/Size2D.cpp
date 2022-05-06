#include "Phantasia/Math/TwoD/Size2D.hpp"

using namespace Phantasia::Math::TwoD;

Size2D::Size2D(int width, int height) : width(width), height(height) {}

bool Size2D::contains(int x, int y) const {
    return (x >= 0 && x < width) &&
        (y >= 0 && y < height);
}