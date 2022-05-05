#include "Phantasia/Math/TwoD/Grid2D.hpp"

using namespace Phantasia::Math::TwoD;

Grid2D::Grid2D(int x, int y, int width, int height) : Rect2D(x, y, width, height) {}
Grid2D::Grid2D(Point2D loc, Size2D size) : Rect2D(loc, size) {}

