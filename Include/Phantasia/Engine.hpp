#pragma once

#include "Phantasia/KeyEvent.hpp"
#include <memory>


namespace Phantasia {
    namespace Render {
        class Window;
    }
    class Game;
    class GameContext;
    typedef Game* (*GameConstructor)();
    class Engine : public KeyListener {
    public:
        Engine(GameContext* context, GameConstructor gc);
        ~Engine();
        
        void initialize();
        void shutdown();

		void run();
		bool loop();

		void update();
		void render(double delta);

        Game& getGame();
        Render::Window& getWindow();

        virtual bool handleKey(Key key) override;
    private:
        GameContext* context;
        std::unique_ptr<Game> game;
        std::unique_ptr<Render::Window> window;
    };
}