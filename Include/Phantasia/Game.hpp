#pragma once

#include "Phantasia/KeyEvent.hpp"

namespace Phantasia {
    class Game : public virtual KeyListener {
    public:
        Game();
        virtual ~Game();

        virtual void Update() = 0;
        virtual void Render(double delta) = 0;
    private:
    };
}