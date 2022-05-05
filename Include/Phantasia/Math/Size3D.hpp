#pragma once

namespace Phantasia {
    struct Size3D {
        Size3D(int width, int height, int depth) : width(width), height(height), depth(depth) {}

        inline int GetWidth() const { return width; }
        inline int GetHeight() const { return height; }
        inline int GetDepth() const { return depth; }

        inline void GetSize3D(int* width, int* height, int* depth) const {
            *width = this->width;
            *height = this->height;
            *depth = this->depth;
        }

        const int width, height, depth;
    };
}