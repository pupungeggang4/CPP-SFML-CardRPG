#ifndef GAME_HPP
#define GAME_HPP

#include "includes.hpp"

class Game {
    public:
        // System
        sf::RenderWindow window;
        sf::Clock clock; float dt;

        // Game System
        State state;

        // Functions
        Game();
        void loop();
        void handleInput();
};

#endif
