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

	ArmoredCar(string tipe, string model, int health,int C, int S) : CombatVehicle(tipe, model, health)
	{ 
		
		this->C = C;
		this->S = S;
	}

	int Attack()override
	{
		int rasAttack = 50 * C;
		return rasAttack;

	}

	void Defense(int damage)override
	{
		health = damage - (S / 2);
		
	}

	void ShowInfo()const override
	{
		cout << "Tipe: " << this->type << endl;
		cout << "Model: " << this->model << endl;
		cout << "Health: " << this->health << endl;
		cout << "Number of weapons: " << C << endl;
		cout << "Speed: " << S << endl;
	}

};
