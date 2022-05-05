#pragma once

namespace Phantasia::Math::TwoD {
    struct Size2D {
        Size2D(int width, int height) : width(width), height(height) {}

        inline int GetWidth() const { return width; }
        inline int GetHeight() const { return height; }
        inline void GetSize(int* width, int* height) const {
            *width = this->width;
            *height = this->height;
        }

        const int width, height;
    };
}