#include <iostream>
#include<ctime>
#include<string>
#include"CombatVehicle.h"
#include"Tank.h"
#include"ArmoredCar.h"
#include"AirDefenseVehicle.h"
using namespace std;

void BuildingAnArmy(CombatVehicle& army, int size, Tank t1, Tank t2, ArmoredCar a1, ArmoredCar a2, AirDefenseVehicle adv1)
{
	for (int i = 0; i < size; i++)
	{
		int combat = rand() % 5;
		if (combat == 1) army[i] = &t1;

		else if (combat == 2) army[i] = &a1;

		else if (combat == 3) army[i] = &adv1;

		else if (combat == 4) army[i] = &t2;

		else if (combat == 5) army[i] = &a2;
	}
}

//bool Round(CombatVehicle& cv1, CombatVehicle& cv2)
//{
//	while (!cv1.IsDestroyed() || !cv2.IsDestroyed())
//	{
//		cv1.Attack(&cv2);
//		if (!cv2.IsDestroyed()) {
//			cv2.Attack(&cv1);
//		}
//	}
//
//	if (cv1.IsDestroyed()) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}



int main()
{
	srand(time(0));
	Tank t1("Abrams", "M1", 150, 8, 8, 1500);
	Tank t2("T", "34", 100, 5, 5, 900);
	ArmoredCar a1("BTR", "Bucefal", 70, 4, 80);
	ArmoredCar a2("BTR", "4", 60, 4, 70);
	AirDefenseVehicle adv1("Shilka", "21b", 50, 2000, 100, 50);

	

	CombatVehicle* army1[5];
	CombatVehicle* army2[5];

	for (int i = 0; i < 5; i++) //  ÷îãî òóò ïðàöþº à â ôóíêö³¿ í³??????
	{
		int combat = rand() % 5;
		if (combat == 1) army1[i] = &t1;

		else if (combat == 2) army1[i] = &a1;

		else if (combat == 3) army1[i] = &adv1;

		else if (combat == 4) army1[i] = &t2;

		else if (combat == 5) army1[i] = &a2;
	}

	for (int i = 0; i < 5; i++)
	{
		int combat = rand() % 5;
		if (combat == 1) army2[i] = &t1;

		else if (combat == 2) army2[i] = &a1;

		else if (combat == 3) army2[i] = &adv1;

		else if (combat == 4) army2[i] = &t2;

		else if (combat == 5) army2[i] = &a2;
	}



	BuildingAnArmy(&army1,5, t1, t2, a1, a2, adv1);

	/*BuildingAnArmy(&army2, t1, t2, a1, a2, adv1);*/
	

	system("pause");
	return 0;
}