#include "Phantasia/Render/BasicSurface2D.hpp"

using namespace Phantasia::Render;

BasicSurface2D::BasicSurface2D(int width, int height) : width(width), height(height) {
	
}

bool BasicSurface2D::contains(int x, int y) const {
	return (x >= 0 && x <= width) &&
		(y >= 0 && y <= height);
}