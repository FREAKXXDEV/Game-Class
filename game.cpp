#include "game.h"

Game::Game() 
	: window(sf::VideoMode(840, 520), "The Game Class", sf::Style::Close) {
	 
	// TODO: Inititalize Game Objects
}

void Game::run() {
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.0f / FPS);

	while (window.isOpen()) {
		processEvents();
		timeSinceLastUpdate = clock.restart();
		while (timeSinceLastUpdate > timePerFrame) {
			timeSinceLastUpdate -= timePerFrame;
			update(timePerFrame);
		}
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
