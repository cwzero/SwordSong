#pragma once

#include "Phantasia/Game.hpp"
#include "SwordSong/SwordSong.hpp"

namespace SwordSong {
    class SwordSongGame : public Phantasia::Game {
    public:
        SwordSongGame();
        ~SwordSongGame();

        virtual void update() override;
        virtual void render(double delta) override;

        virtual bool handleKey(Phantasia::Key key) override;
    private:
    };
}