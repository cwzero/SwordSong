#pragma once

#include "Phantasia/KeyEvent.hpp"

namespace Phantasia {
    class Game : public KeyListener {
    public:
        virtual void Update() = 0;
        virtual void Render(double delta) = 0;
    private:
    };
}