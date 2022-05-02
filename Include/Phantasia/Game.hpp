#pragma once

#include "Phantasia/Phantasia.hpp"

namespace Phantasia {
    class Phantasia_API Game {
    public:
        Game();
        virtual ~Game();

        virtual void Update() = 0;
        virtual void Render() = 0;
    private:
    };
}