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

	Tank(string tipe, string model, int health,int R, int A, int T) :  CombatVehicle( tipe,  model,  health), R(R), A(A), T(T) 
	{
		/*tipe = "Abrams";
		model = "M1";
		health = 150;
		R = 8;
		A = 8;
		T = 1500;*/
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
		cout << "Recharge time: " << R << endl;
		cout << "Shot accuracy: " << A << endl;
		cout << "Armor thickness: " << T << endl;
	}
};
