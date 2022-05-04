#pragma once

#include "Phantasia/Game.hpp"
#include "SwordSong/SwordSong.hpp"

namespace SwordSong {
    class SwordSongGame : public Phantasia::Game {
    public:
        SwordSongGame();
        ~SwordSongGame();

        virtual void Update() override;
        virtual void Render(double delta) override;

        virtual bool HandleKey(Phantasia::Key key) override;
    private:
    };
}