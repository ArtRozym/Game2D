#ifndef PERSONAGES_H
#define PERSONAGES_H

class Personage
{
public:
	//���������� ������ � � �, ������, ������, ��������� (�� � � �� �), ���� ��������
	float coordinateX, coordinateY, height, width, speedUpDx, speedUpDy, speed;

	//����������� (direction) �������� ������, 
	//attack - �����, 
	//defense - ������
	//health - ������'�
	//damageMin - ��������� ����, 
	//damageMax - ������������ ����, 
	//numberOfShots - ����� �������
	//cost - tchina
	//numerosity - kilkist
	int //direction, 
		attack, defense, health, 
		damageMin, damageMax, numberOfShots, cost, numerosity;

	//dowmanYN - lychunk
	//cavalryYN - konuk
	//infantry - pihota
	bool life, dowmanYN, cavalryYN, infantryYN;

	std::string namePersonage;

	//std::string File; //���� � �����������
	//sf::Image image;//���� �����������
	sf::Texture texture;//���� ��������
	sf::Sprite sprite;//���� ������


	Personage(sf::Image &image, std::string Name, 
		float CoordinateX, float CoordinateY, float Width, float Height,
		int Atrack, int Defense, int Health, int DamageMin, int DamageMax,
		int NumberOfShots, int Cost, 
		bool DowmanYN, bool CavalryYN, bool InfantryYN)
	{
		namePersonage = Name;

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
		sprite.setOrigin(width / 2, height / 2);

	};
	~Personage() 
	{};



private:

};





#endif // ! PERSONAGES_H
