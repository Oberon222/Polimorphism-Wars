#pragma once
#include <iostream>
#include<string>
#include"CombatVehicle.h"
#include<ctime>
using namespace std;

class Tank : public CombatVehicle
{
	int R; //��� �����������
	int A; // ������ �������
	int T; // ������� ����
public:
	Tank() : R(0), A(0), T(0) { }

	Tank(string tipe, string model, int health,int R, int A, int T) :  CombatVehicle( tipe,  model,  health), R(R), A(A), T(T) 
	{
		tipe = tipe;
		model = model;
		health = health;
		R = R;
		A = A;
		T = T;
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
