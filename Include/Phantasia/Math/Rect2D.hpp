#pragma once

#include "Phantasia/Math/Point2D.hpp"
#include "Phantasia/Math/Size2D.hpp"
#include "Phantasia/Math/Container2D.hpp"

namespace Phantasia {
    class Rect2D : public Container2D {
    public:
        Rect2D(int x, int y, int width, int height);
        Rect2D(Point2D location, Size2D size);

        inline int GetWidth() const { return width; }
        inline int GetHeight() const { return height; }
        inline void GetSize(int* width, int* height) const {
            *width = this->width;
            *height = this->height;
        }
        inline Size2D GetSize() const { return {width, height}; }

        inline int GetX() const { return x; }
        inline int GetY() const { return y; }
        inline void GetLocation(int* x, int* y) const {
            *x = this->x;
            *y = this->y;
        }
        inline Point2D GetLocation() const { return {x, y}; }

        virtual bool contains(int x, int y) override;
        virtual bool contains(Point2D pos) override;

        const int x, y;
        const int width, height;
    };
}