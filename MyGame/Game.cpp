// ���������� ��������� ������ Graphics, � �� ������������� ���������� ��������� ������ Window
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <string>
#include "Menu.h"
#include "Personages.h"
#include "Functions.h"
#include <iostream>
#include <list>

int main()
{
	// ������ ����
	sf::RenderWindow window(sf::VideoMode(800, 800, 32), "My Game");
	
	std::cout << "program begin\n\n";

	//textureMenu(window);

	std::cout << "program not begin\n\n";

	//������ ������, ���� ���� ������ �������.
	std::vector<Personage> personages; 
	//�������� ����� ��������� �� ��-��� ������
	std::list<Personage*> ::iterator it;

	sf::Image armyImage;
	armyImage.loadFromFile("images/pers.png");

	Personage easyInfantry {armyImage, "easyInfantry", 10.0, 10.0, 60, 60,
							0, 0, 5, 4, 5, 2, 5, 0, 50, false, false, true};

	Personage easyDowman {armyImage, "easyDowman", 100.0, 100.0, 60, 60,
							60, 0, 2, 2, 3, 1, 3, 10, 80, true, false, false};

	Personage easyCavalry {armyImage, "easyCavalry", 200.0, 10.0, 60, 60,
							120, 0, 6, 5, 7, 4, 7, 0, 120, false, true, false};

	personages.push_back(easyCavalry);
	personages.push_back(easyInfantry);
	personages.push_back(easyDowman);

	/*personages.push_back(new Personage(armyImage, "easyCavalry", 200.0, 10.0, 60, 60,
		120, 0, 6, 5, 7, 4, 7, 0, 120, false, true, false));
	personages.push_back(new Personage(armyImage, "easyDowman", 100.0, 100.0, 60, 60,
		60, 0, 2, 2, 3, 1, 3, 10, 80, true, false, false));
	personages.push_back(new Personage( armyImage, "easyInfantry", 10.0, 10.0, 60, 60,
							0, 0, 5, 4, 5, 2, 5, 0, 50, false, false, true ));*/

	textureMenu(window, &personages, personages.size());

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
	return 0;
}