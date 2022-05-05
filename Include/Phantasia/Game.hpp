#pragma once

#include "Phantasia/KeyEvent.hpp"

namespace Phantasia {
    class TileGrid2D;
    class Game : public KeyListener {
    public:
        virtual void Update() = 0;
        virtual void Render(TileGrid2D& grid, double delta) = 0;
    private:
    };
}