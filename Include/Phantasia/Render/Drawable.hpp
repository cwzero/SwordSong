#pragma once

#include "Phantasia/Math/TwoD/Point2D.cpp"

namespace Phantasia::Render {
    class Surface;
    class Drawable {
    public:
        virtual void draw(Surface& surface, int offsetX, int offsetY) = 0;
    private:
    };
}