#include "Phantasia/Render/Surface.hpp"

using namespace Phantasia::Render;

Surface::Surface(int width, int height) : width(width), height(height) {
	
}

bool Surface::contains(int x, int y) const {
	return (x >= 0 && x <= width) &&
		(y >= 0 && y <= height);
}