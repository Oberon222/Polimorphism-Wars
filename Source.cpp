#include <iostream>
#include<ctime>
#include<string>
#include"CombatVehicle.h"
#include"Tank.h"
#include"ArmoredCar.h"
#include"AirDefenseVehicle.h"
using namespace std;

void BuildingAnArmy(CombatVehicle** army, int size) // вказівник на масив вказивників
{
	for (int i = 0; i < size; i++)
	{
		int combat = rand() % 2;

		switch (combat)
		{
			case 1:
			{
				army[i] = new Tank ("Abrams","M2",150,8,8, 1500);
				break;
			}

			case 2:
			{
				army[i] = new ArmoredCar("BTR","Bucefal",70,4,80);
				break;
			}

			case 3:
			{
				army[i] = new AirDefenseVehicle("Shilka","21b",50,2000,100,50);
				break;
			}
		}
	}
}

bool Round(CombatVehicle& cv1, CombatVehicle& cv2)
{
	while (!cv1.IsDestroyed() && !cv2.IsDestroyed())
	{
		cv2.Defense(cv1.Attack());
		cv1.Defense(cv2.Attack());
	
	}

	if (cv1.IsDestroyed()) {
		return false;
	}
	else {
		return true;
	}
}



int main()
{
	srand(time(0));

	CombatVehicle* army1[5];
	CombatVehicle* army2[5];

	BuildingAnArmy(*&army1,5);

	BuildingAnArmy(*&army2, 5);

	system("pause");
	return 0;
}