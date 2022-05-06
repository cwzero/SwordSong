#pragma once

#include "Phantasia/KeyEvent.hpp"
#include <memory>


namespace Phantasia {
    namespace Render {
        class Window;
    }
    class Game;
    typedef Game* (*GameConstructor)();
    class Engine : public KeyListener {
    public:
        Engine(GameConstructor gameCon);
        ~Engine();
        
        void initialize();
        void shutdown();

		void run();
		bool loop();

		void update();
		void render(double delta);

        virtual bool handleKey(Key key) override;
    private:
        std::unique_ptr<Game> game;
        std::unique_ptr<Render::Window> window;
    };
}