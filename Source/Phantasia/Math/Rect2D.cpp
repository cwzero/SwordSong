#include "Phantasia/Math/TwoD/Rect2D.hpp"

using namespace Phantasia::Math::TwoD;

Rect2D::Rect2D(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {

}

Rect2D::Rect2D(Point2D location, Size2D size) : Rect2D(location.x, location.y, size.width, size.height) {

}

bool Rect2D::contains(int x, int y) {
    int tx = this->x + x;
    int ty = this->y + y;

    return (tx > 0 && tx <= width) &&
        (ty > 0 && ty <= height);
}

bool Rect2D::contains(Point2D pos) {
    int tx = this->x + pos.x;
    int ty = this->y + pos.y;

    return (tx > 0 && tx <= width) &&
        (ty > 0 && ty <= height);
}