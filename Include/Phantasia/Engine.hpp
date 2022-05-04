#pragma once

#include "Phantasia/KeyEvent.hpp"
#include <memory>

namespace Phantasia {
    class Game;
    class Window;
    typedef Game* (*GameConstructor)();
    class Engine : KeyListener {
    public:
        Engine(GameConstructor gameCon);
        ~Engine();
        
        void Initialize();
        void Shutdown();

		void Run();
		bool Loop();

		void Update();
		void Render(double delta);

        virtual bool HandleKey(Key key) override;
    private:
        std::unique_ptr<Game> game;
        std::unique_ptr<Window> window;
    };
}