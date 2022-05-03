#pragma once

#include "Phantasia/Game.hpp"
#include "SwordSong/SwordSong.hpp"

namespace SwordSong {
    class SwordSongGame : public virtual Phantasia::Game {
    public:
        SwordSongGame();
        virtual ~SwordSongGame() override;

        virtual void Update() override;
        virtual void Render(double delta) override;

        virtual bool HandleKey(Phantasia::Key key) override;
    private:
    };
}