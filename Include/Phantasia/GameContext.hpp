#pragma once

#include <memory>

namespace Phantasia {
    namespace Render {
        class Window;
    }
    class Engine;
    class Game;
    class GameContext;

    typedef Game* (*GameConstructor)();
    typedef Engine* (*EngineConstructor)(GameContext*, GameConstructor);

    class GameContext {
    public:
        GameContext(EngineConstructor ec, GameConstructor gc);

        Engine& getEngine();
        Game& getGame();
        Render::Window& getWindow();

        void run();
    private:
        std::unique_ptr<Engine> engine;
    };
}