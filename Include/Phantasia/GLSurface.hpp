#pragma once

#include <memory>

#include "Phantasia/Surface.hpp"

namespace Phantasia {
    class TileSet;
    class GLSurface : public Surface {
    public:
        GLSurface(int width, int height);

        virtual inline int GetWidth() const override { return width; }
        virtual inline int GetHeight() const override { return height; }

        virtual inline void GetSize(int* width, int* height) const override {
            *width = this->width;
            *height = this->height;
        }

        virtual Size2D GetSize() const override {
            return {width, height};
        }

        virtual void DrawTile(ColoredTile* tile, int x, int y) override;
        virtual void DrawTile(ColoredTile* tile, Point2D loc) override;
    private:
        const int width, height;
        std::unique_ptr<TileSet> tileSet;
    };
}