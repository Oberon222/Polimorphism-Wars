#pragma once
#include <iostream>
#include<string>
using namespace std;

class CombatVehicle
{
protected:
	string type;
	string model;
	int health; // xp 
public:
	CombatVehicle() : type("No tipe"), model("empty"), health(0) { }

	CombatVehicle(string tipe, string model, int health) : 
		type(tipe), model(model), health(health) { }

	virtual bool IsDestroyed()
	{
		if (health <= 0) return true;
		return false;
	}

	virtual void ShowInfo()const
	{
		cout << "Type: " << type << endl;
		cout << "Model: " << model << endl;
		cout << "Health: " << health << endl;
	}

	virtual int Attack() = 0;

	virtual void Defense(int damage) = 0;
};
