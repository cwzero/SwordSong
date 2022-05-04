#pragma once

namespace Phantasia {
    class Surface;
    class Drawable {
    public:
        virtual void Draw(Surface& surface, int offsetX, int offsetY) = 0;
        virtual void Draw(Surface& surface, Point2D offset) = 0;
    private:
    };
}