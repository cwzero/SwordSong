#pragma once

#include "Phantasia/KeyEvent.hpp"

namespace Phantasia {
    class Game : public KeyListener {
    public:
        virtual void update() = 0;
        virtual void render(double delta) = 0;
    private:
    };
}