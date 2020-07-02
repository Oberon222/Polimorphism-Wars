#pragma once
#include <iostream>
#include<string>
#include"CombatVehicle.h"
using namespace std;
class AirDefenseVehicle : public CombatVehicle
{
	int L;// дальність дії
	int R_shot;// швидкість стрільби
	int M; // мобільність
public:
	AirDefenseVehicle() : L(0), R_shot(0), M(0) { }

	AirDefenseVehicle(string tipe, string model, int health, int L, int R_shot, int M)
	{
		tipe = "Shilka";
		model = "ZSU-23-4";
		health = 50;
		L = 1500;
		R_shot = 11;
		M = 6;
	}

	int Attack()override
	{
		int resAttack = 150 + L * (R_shot / 10);
		return resAttack;
	}

	int Defense(int damage)override
	{
		health = damage / M;
		return health;
	}

	void ShowInfo()const override
	{
		cout << "" << L << endl;
		cout << " " << R_shot << endl;
		cout << " " << M << endl;
	}
};
