#pragma once
#include <iostream>
#include<string>
#include"CombatVehicle.h"
using namespace std;
class ArmoredCar : public CombatVehicle
{
	int C; // кількість зброї
	int S; // швидкість
public:
	ArmoredCar() : C(0), S(0) { }

	ArmoredCar(string tipe, string model, int health,int C, int S)
	{ 
		tipe = "BTR";
		model = "Bucefal";
		health = 100;
		C = 4;
		S = 80;
	}

	int Attack()override
	{
		int rasAttack = 50 * C;
		return rasAttack;

	}

	int Defense(int damage)override
	{
		health = damage - (S / 2);
		return health;
	}

	void ShowInfo()const override
	{
		cout << "Number of weapons: " << C << endl;
		cout << "Speed: " << S << endl;
	}

};
