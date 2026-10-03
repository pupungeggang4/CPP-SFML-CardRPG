#include "game.hpp"

Game::Game() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    if (desktop.size.x / aspRatio > desktop.size.y) {
        height = (unsigned int)(desktop.size.y * 0.8f); width = (unsigned int)(height * aspRatio);
    } else {
        width = (unsigned int)(desktop.size.x * 0.8f); height = (unsigned int)(width / aspRatio);
    } 
    window = sf::RenderWindow(sf::VideoMode({width, height}), "Planterguy's Adventure");
    viewUI = sf::View({640, 360}, {1280, 720});
    viewCamera = sf::View({0, 0}, {1280, 720});
    clock = sf::Clock();
}

void Game::loop() {
    while (window.isOpen()) {
        dt = clock.restart().asSeconds();
        handleInput();

        //update
        //render
        window.clear(sf::Color::White);
        window.setView(viewUI);
        sf::RectangleShape rect = sf::RectangleShape({80.0f, 80.0f});
        rect.setPosition({0.0f, 0.0f});
        rect.setFillColor(sf::Color::White);
        window.draw(rect);
        window.display();
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
