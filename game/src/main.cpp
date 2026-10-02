#include "includes.hpp"
#include "game.hpp"

int main (int argc, char** argv) {
    std::cout << "Hello SFML" << std::endl;
    Game game;
    game.loop();
    return 0;
}
