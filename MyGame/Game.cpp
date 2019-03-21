// ���������� ��������� ������ Graphics, � �� ������������� ���������� ��������� ������ Window
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <string>
#include "Menu.h"
#include "Personages.h"
#include "Functions.h"
#include <iostream>
#include "Game.h"

int main()
{
	// ������ ����
	sf::RenderWindow window(sf::VideoMode(800, 800, 32), "My Game");
	
	std::cout << "program begin\n\n";

	//textureMenu(window);

	std::cout << "program not begin\n\n";

	int const numbersPersonages = 6;

	//������ ������, ���� ���� ������ �������.
	Personage personagesArray[numbersPersonages];
	//�������� ����� ��������� �� ��-��� ������
	
	//sf::Image armyImage;
	//armyImage.loadFromFile("images/pers.png");

	//parametrs personage is player
	personagesArray[0] = Personage{ "easyInfantry", 10.0, 10.0, 60.0, 60.0, 
							0, 0, 20, 5, 4, 5, 2, 5, 0, 50, false, false, true};

	personagesArray[1] = Personage { "easyDowman", 100.0, 10.0, 60.0, 60.0, 
							60, 0, 0, 2, 2, 3, 1, 3, 10, 80, true, false, false};

	personagesArray[2] = Personage { "easyCavalry", 200.0, 10.0, 60.0, 60.0, 
							120, 0, 20, 6, 5, 7, 4, 7, 0, 120, false, true, false};

	//parametrs personage is enemy
	personagesArray[3] = Personage{ "easyEnemyInfantry", 300.0, 10.0, 60.0, 60.0, 
							180, 0, 0, 5, 4, 5, 2, 5, 0, 50, false, false, true };

	personagesArray[4] = Personage{ "easyEnemyDowman", 400.0, 10.0, 60.0, 60.0, 
							240, 0, 10, 2, 2, 3, 1, 3, 10, 80, true, false, false };

	personagesArray[5] = Personage{ "easyEnemyCavalry", 500.0, 10.0, 60.0, 60.0, 
							300, 0, 10, 6, 5, 7, 4, 7, 0, 120, false, true, false };

	
	textureMenu(window, personagesArray, numbersPersonages);

	/*
	// �������� ����
	while (window.isOpen())
	{
		// ��������� ������� (������� ������, �������� ���� � �.�.)
		sf::Event event;
		while (window.pollEvent(event))
		{
			// ���� ������� "�������� ����":
			if (event.type == sf::Event::Closed)
				// ��������� ���� 
				window.close();
		}

		// ������� ����� � �������� ��� ����� ������
		//window.clear(sf::Color(0, 0, 255));

		// ���������� �� �����
		//window.display();
	}
	*/


	std::cout << "the end\n\n";

	system("pause");
	return 0;
}