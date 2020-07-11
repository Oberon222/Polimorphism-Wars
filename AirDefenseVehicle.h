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

	AirDefenseVehicle(string tipe, string model, int health, int L, int R_shot, int M) : CombatVehicle(tipe, model, health)
	{
		this->L = L;
		this->R_shot = R_shot;
		this->M = M;
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
		cout << "Tipe: " << this->type << endl;
		cout << "Model: " << this->model << endl;
		cout << "Health: " << this->health << endl;
		cout << "Range: " << L << endl;
		cout << "Firing speed: " << R_shot << endl;
		cout << "Mobility: " << M << endl;
	}
};
