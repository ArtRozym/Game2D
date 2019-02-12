// Подключаем заголовок модуля Graphics, а он автоматически подключает заголовок модуля Window
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

int main()
{
	// создаём окно
	sf::RenderWindow window(sf::VideoMode(800, 600, 32), "My Game");
	
	std::cout << "program begin\n\n";

	textureMenu(window);

	std::cout << "program not begin\n\n";

	// основной цикл
	while (window.isOpen())
	{
		// проверяем события (нажатие кнопки, закрытие окна и т.д.)
		sf::Event event;
		while (window.pollEvent(event))
		{
			// если событие "закрытие окна":
			if (event.type == sf::Event::Closed)
				// закрываем окно 
				window.close();
		}

		// очищаем экран и заливаем его синим цветом
		//window.clear(sf::Color(0, 0, 255));

		// отображаем на экран
		//window.display();
	}

	std::cout << "the end\n\n";
	return 0;
}