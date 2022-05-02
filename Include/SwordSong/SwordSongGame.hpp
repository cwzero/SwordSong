#pragma once

#include "Phantasia/Game.hpp"
#include "SwordSong/SwordSong.hpp"

namespace SwordSong {
    class SwordSong_API SwordSongGame : public virtual Phantasia::Game {
    public:
        SwordSongGame();
        virtual ~SwordSongGame() override;

        virtual void Update() override;
        virtual void Render() override;
    private:
    };
}