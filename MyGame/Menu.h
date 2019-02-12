#ifndef MENU_H
#define MENU_H

#include <iostream> //
void textureMenu(sf::RenderWindow & window)
{
	std::cout << "menu 1\n\n";//
	sf::Texture menuTextureStartGame, menuTextureAboutTheProgram, 
		menuTextureAbout, menuTextureExit, menuTexturePenguins,
		gameMap1;

	menuTexturePenguins.loadFromFile("images/Penguins.jpg");
	menuTextureStartGame.loadFromFile("images/startGame.png");
	menuTextureAboutTheProgram.loadFromFile("images/aboutTheProgram.png");
	menuTextureAbout.loadFromFile("images/about.png");
	menuTextureExit.loadFromFile("images/exit.png");
	gameMap1.loadFromFile("images/map1.png");

	std::cout << "menu 2\n\n";//
	sf::Sprite menuSpriteStartGame(menuTextureStartGame),
		menuSpritePenguins(menuTexturePenguins),
		menuSpriteAboutTheProgram(menuTextureAboutTheProgram),
		menuSpriteAbout(menuTextureAbout),
		menuSpriteExit(menuTextureExit),
		gameMapSprite1(gameMap1);


	bool isMenu = true;
	int menuNumber = 0;

	std::cout << "menu 3\n\n";//
	menuSpriteStartGame.setPosition(50, 30);
	menuSpriteAboutTheProgram.setPosition(50, 90);
	menuSpriteExit.setPosition(50, 150);
	menuSpritePenguins.setPosition(295, 0);
	std::cout << "menu 4\n\n";//

	////Menu////
	while (isMenu)
	{
		std::cout << "menu 5\n\n";//
		menuSpriteStartGame.setColor(sf::Color::White);
		menuSpriteAboutTheProgram.setColor(sf::Color::White);
		menuSpriteExit.setColor(sf::Color::White);

		menuNumber = 0;

		window.clear(sf::Color(129, 181, 221));

		if (sf::IntRect(50, 30, 150, 50).contains(sf::Mouse::getPosition(window)))
		{
			menuSpriteStartGame.setColor(sf::Color::Red);
			menuNumber = 1;
			std::cout << "red 1\n\n";//
		}
		if (sf::IntRect(50, 90, 150, 50).contains(sf::Mouse::getPosition(window)))
		{
			menuSpriteAboutTheProgram.setColor(sf::Color::Red);
			menuNumber = 2;
			std::cout << "red 2\n\n";//
		}
		if (sf::IntRect(50, 150, 150, 50).contains(sf::Mouse::getPosition(window)))
		{
			menuSpriteExit.setColor(sf::Color::Red);
			menuNumber = 3;
			std::cout << "red 3\n\n";//
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << "click\n\n";//
			if (menuNumber == 1)
			{
				window.draw(gameMapSprite1);
				window.display();
				
				while (!(sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt)));
				//isMenu = false;
			}

			if (menuNumber == 2)
			{
				window.draw(menuSpriteAbout);
				window.display();
				while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape));
			}

			if (menuNumber == 3)
			{
				window.close();
				isMenu = false;
			}

		}

		window.draw(menuSpritePenguins);
		window.draw(menuSpriteStartGame);
		window.draw(menuSpriteAboutTheProgram);
		window.draw(menuSpriteExit);

		window.display();

	}
	std::cout << "menu 6\n\n";//

}

#endif // !MENU_H
