#pragma once

namespace Phantasia {
    class GameWorld {
    public:
        GameWorld(int width, int height, int depth);
    private:
        const int width, height, depth;
    };
}