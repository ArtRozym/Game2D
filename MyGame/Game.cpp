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

	textureMenu(window);

	std::cout << "program not begin\n\n";

	//������ ������, ���� ���� ������ �������.
	std::list<Personage*> entities; 
	//�������� ����� ��������� �� ��-��� ������
	std::list<Personage*> ::iterator it;

	//Personage easyInfantry{};
	

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