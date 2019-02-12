#ifndef PERSONAGES_H
#define PERSONAGES_H

class Personage
{
private:
	//координаты игрока х и у, высота, ширина, ускорение (по х и по у), сама скорость
	float coordinateX, coordinateY, height, width, speedUpDx, speedUpDy, speed;

	//направление (direction) движения игрока, 
	//attack - атака, 
	//defense - защита
	//health - здоров'я
	//damageMin - мінімальний урон, 
	//damageMax - максимальний урон, 
	//numberOfShots - запас пострілів
	//cost - tchina
	//numerosity - kilkist
	int //direction,
		spriteCoordnateX, spriteCoordnateY,
		attack, defense, health, 
		damageMin, damageMax, numberOfShots, cost, numerosity;

	//dowmanYN - lychunk
	//cavalryYN - konuk
	//infantry - pihota
	bool life, dowmanYN, cavalryYN, infantryYN;

	//std::string namePersonage;

	//std::string File; //файл с расширением
	//sf::Image image;//сфмл изображение
	sf::Texture texture;//сфмл текстура
	sf::Sprite sprite;//сфмл спрайт

public:
	Personage(sf::Image &image, //std::string Name, 
		float CoordinateX, float CoordinateY, float Width, float Height,
		int SpriteCoordinateX, int SpriteCoordinateY,
		int Atrack, int Defense, int Health, int DamageMin, int DamageMax,
		int NumberOfShots, int Cost, 
		bool DowmanYN, bool CavalryYN, bool InfantryYN)
	{
		//namePersonage = Name;

		spriteCoordnateX = SpriteCoordinateX;
		spriteCoordnateY = SpriteCoordinateY;

		coordinateX = CoordinateX;
		coordinateY = CoordinateY;
		height = Height;
		width = Width;
		speed = 0;
		speedUpDx = 0;
		speedUpDy = 0;

		attack = Atrack; 
		defense = Defense; 
		health = Health;
		damageMin = DamageMin; 
		damageMax = DamageMax; 
		numberOfShots = NumberOfShots; 
		cost = Cost; 
		numerosity = 0;

		life = true;
		dowmanYN = DowmanYN;
		cavalryYN = CavalryYN;
		infantryYN = InfantryYN;

		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setTextureRect(sf::IntRect(spriteCoordnateX, spriteCoordnateY, width, height));
		//sprite.setOrigin(width / 2, height / 2);
		sprite.setPosition(coordinateX, coordinateY);
		

	};
	~Personage() 
	{};


};





#endif // ! PERSONAGES_H
