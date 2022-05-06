#pragma once

#include "Phantasia/Game.hpp"
#include "Phantasia/GameContext.hpp"
#include "SwordSong/SwordSong.hpp"

namespace SwordSong {
    class SwordSongGame : public Phantasia::Game {
    public:
        SwordSongGame();
        ~SwordSongGame();

        virtual void update(Phantasia::GameContext& context) override;
        virtual void render(Phantasia::GameContext& context, double delta) override;

        virtual bool handleKey(Phantasia::Key key) override;
    private:
    };
}