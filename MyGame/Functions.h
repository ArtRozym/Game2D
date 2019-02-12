#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//ф-я визначення рандомно урону
int getRandomDamage(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

//moduficachia yronu
int modsDamage(int getPointRandomDamage(int , int ), int minDamage, int maxDamage, int attack, int defense)
{
	int rDamage = getRandomDamage(minDamage, maxDamage);
	return static_cast<int>((attack/defense)*rDamage);
}

//купівля войнів
int buy(const int cost, int &money, int numerosity)
{
	if (money < cost*numerosity)
		std::cout << "\nNe dostatno koshtiv!\n";
	else
	{
		money -= cost * numerosity;
		return numerosity;
	}
}

#endif // !FUNCTIONS_H
