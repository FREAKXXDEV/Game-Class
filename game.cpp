#include "game.h"

Game::Game() 
	: window(sf::VideoMode(840, 520), "The Game Class", sf::Style::Close) {
	 
	// TODO: Inititalize Game Objects
}

void Game::run() {
	sf::Clock clock;

	while (window.isOpen()) {
		processEvents();
		update(clock.restart());
		render();
	}
}

void Game::processEvents() {
	sf::Event evnt;

	while (window.pollEvent(evnt)) {
		switch (evnt.type) {
		case sf::Event::Closed:
			window.close();
			break;
		}
	}
}

void Game::update(sf::Time time) {
	float deltaTime = time.asSeconds();

	// TODO: Update Game Objects
}

void Game::render() {
	//TODO: Render Game Objects

	window.clear();
	window.display();
}
