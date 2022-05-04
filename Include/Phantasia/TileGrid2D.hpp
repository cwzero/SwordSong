#pragma once

#include "Phantasia/Math.hpp"
#include "Phantasia/Tile.hpp"
#include "Phantasia/Surface.hpp"
#include "Phantasia/Drawable.hpp"

namespace Phantasia {
    class TileGrid2D : public Surface, public Drawable {
    public:
        TileGrid2D(int width, int height);
        ~TileGrid2D();

        virtual inline int GetWidth() override {
            return width;
        }

        virtual inline int GetHeight() override {
            return height;
        }

        virtual inline void GetSize(int* width, int* height) override {
            *width = this->width;
            *height = this->height;
        }

        virtual Size2D GetSize() override {
            return {width, height};
        }

        virtual void DrawTile(ColoredTile tile, int x, int y) override;
        virtual void DrawTile(ColoredTile tile, Point2D loc) override;

        virtual void Draw(Surface& surface, int offsetX, int offsetY) override;
        virtual void Draw(Surface& surface, Point2D offset) override;
    private:
        bool IsValid(int x, int y);
        bool IsValid(Point2D loc);
        
        int width, height;
        ColoredTile** grid;
    };
}