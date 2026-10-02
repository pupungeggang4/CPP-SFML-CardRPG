#include "game.hpp"

Game::Game() {
    window = sf::RenderWindow(sf::VideoMode({800, 600}), "Planterguy's Adventure");
    clock = sf::Clock();
}

void Game::loop() {
    while (window.isOpen()) {
        dt = clock.restart().asSeconds();
        handleInput();

        //update
        //render
    }
}

void Game::handleInput() {
    using Scan = sf::Keyboard::Scan;
    while (const std::optional event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window.close();
        }
    }
}
