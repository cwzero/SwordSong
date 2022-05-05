#pragma once

#include "Phantasia/Game.hpp"
#include "SwordSong/SwordSong.hpp"

class Phantasia::TileGrid2D;

namespace SwordSong {
    class SwordSongGame : public Phantasia::Game {
    public:
        SwordSongGame();
        ~SwordSongGame();

        virtual void Update() override;
        virtual void Render(Phantasia::TileGrid2D& grid, double delta) override;

        virtual bool HandleKey(Phantasia::Key key) override;
    private:
    };
}