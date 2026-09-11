#include "../include/main-screen.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 406), "Game Window");
	sf::Texture hyrule; // temporary background will try getting copyright free one later 
	if (!hyrule.loadFromFile("assets/background sprites/background.png")) 
		return EXIT_FAILURE;
	sf::Sprite background(hyrule);

	while (window.isOpen()) {
		sf::Event event{};

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		window.clear();
		window.draw(background);
		window.display();
	}

	return EXIT_SUCCESS;
}
