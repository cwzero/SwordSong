#pragma once

#include "Phantasia/KeyEvent.hpp"

namespace Phantasia {
    class GameContext;
    class Game : public KeyListener {
    public:
        virtual void update(GameContext& context) = 0;
        virtual void render(GameContext& context, double delta) = 0;
    private:
    };
}