#include "game.h"

Game::Game() 
	: window(sf::VideoMode(840, 520), "The Game Class", sf::Style::Close) {
	 
	// TODO: Inititalize Game Objects
}

void Game::run(const float framesPerSecond) {
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time TimePerFrame = sf::seconds(1.f / framesPerSecond);
	while (window.isOpen())	{
		processEvents();
		bool canRender = false;
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > TimePerFrame) {
			timeSinceLastUpdate -= TimePerFrame;
			canRender = true;
			update(TimePerFrame);
		}
		if (canRender)
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
	window.clear();
	
	//TODO: Render Game Objects	
	window.display();
}
