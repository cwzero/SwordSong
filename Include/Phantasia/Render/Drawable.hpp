#pragma once

#include "Phantasia/Math/TwoD/Point2D.cpp"
#include "Phantasia/Math/ThreeD/Point3D.cpp"
#include "Phantasia/Render/Surface2D.hpp"
#include "Phantasia/Render/Surface3D.hpp"

namespace Phantasia::Render {
    class Drawable {
    public:
        virtual void draw(Surface2D& surface, int offsetX, int offsetY) = 0;
        virtual void draw(Surface2D& surface, Point2D offset) {
            draw(surface, offset.x, offset.y);
        }
        
        virtual void draw(Surface3D& surface, int offsetX, int offsetY, int offsetZ) = 0;
        virtual void draw(Surface3D& surface, Point3D offset) {
            draw(surface, offset.x, offset.y, offset.z);
        }
        virtual void draw(Surface3D& surface, Point2D offset, int offsetZ) {
            draw(surface, offset.x, offset.y, offsetZ);
        }
    };
}