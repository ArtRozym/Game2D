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
	//cost - ціна
	//numerosity - кількість
	int //direction,
		spriteCoordnateX, spriteCoordnateY,
		attack, defense, health, 
		damageMin, damageMax, numberOfShots, cost, numerosity;

	//dowmanYN - lychunk
	//cavalryYN - konuk
	//infantry - pihota
	bool life, dowmanYN, cavalryYN, infantryYN;

	std::string namePersonage;

//public:
	//std::string File; //файл с расширением
	//sf::Image image;//сфмл изображение
	sf::Texture texture;//сфмл текстура
	sf::Sprite sprite;//сфмл спрайт
	sf::Image armyImage;
	//armyImage.loadFromFile("images/pers.png");

public:
	Personage(/*sf::Image &image,*/ std::string Name = "",
		float positionCoordinateX = 0.0, float positionCoordinateY = 0.0, float Width = 0.0, float Height = 0.0,
		int SpriteCoordinateX = 0, int SpriteCoordinateY = 0, int Numerosity = 0,
		int Atrack = 0, int Defense = 0, int Health = 0, int DamageMin = 0, int DamageMax = 0,
		int NumberOfShots = 0, int Cost = 0,
		bool DowmanYN = false, bool CavalryYN = false, bool InfantryYN = false)
	{
		namePersonage = Name;

		spriteCoordnateX = SpriteCoordinateX;
		spriteCoordnateY = SpriteCoordinateY;

		coordinateX = positionCoordinateX;
		coordinateY = positionCoordinateY;
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
		numerosity = Numerosity;

		life = true;
		dowmanYN = DowmanYN;
		cavalryYN = CavalryYN;
		infantryYN = InfantryYN;

		texture.loadFromFile("images/pers.png");
		sprite.setTexture(texture);
		sprite.setTextureRect(sf::IntRect(spriteCoordnateX, spriteCoordnateY, width, height));
		//sprite.setOrigin(width / 2, height / 2);
		sprite.setPosition(coordinateX, coordinateY);
		
	};

	~Personage() 
	{};

	int getNumerosity() { return numerosity; }

	sf::Sprite displayPersonage()
	{
		return sprite;
	}

	std::string getNamePersonage()
	{
		return namePersonage;
	}

	void setNumerosity(int newNumerosity)
	{
		numerosity = newNumerosity;
	}

};

#endif // ! PERSONAGES_H
