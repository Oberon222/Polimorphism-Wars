#pragma once
#include <iostream>
#include<string>
#include"CombatVehicle.h"
#include<ctime>
using namespace std;

class Tank : public CombatVehicle
{
	int R; //час перезарядки
	int A; // точнісь пострілу
	int T; // товщина броні
public:
	Tank() : R(0), A(0), T(0) { }

	Tank(string tipe, string model, int health,int R, int A, int T) :  CombatVehicle( tipe,  model,  health)
	{
		this->R = R;
		this->A = A;
		this->T = T;
	}

	int Attack()override
	{
		return 100 * A / R;
	}

	int Defense(int damage)override
	{
		return damage - T;
	}

	void ShowInfo()const override
	{
		cout << "Tipe: " << this->type << endl;
		cout << "Model: " << this->model << endl;
		cout << "Health: " << this->health << endl;
		cout << "Recharge time: " << R << endl;
		cout << "Shot accuracy: " << A << endl;
		cout << "Armor thickness: " << T << endl;
	}
};
