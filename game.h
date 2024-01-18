#pragma once
#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	void run();

private:
	void processEvents();
	void update(sf::Time time);
	void render();

private:
	sf::RenderWindow window;
	float FPS{ 60.0f };
};
