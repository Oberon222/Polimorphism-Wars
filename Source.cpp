#include <iostream>
#include<ctime>
#include<string>
#include"CombatVehicle.h"
#include"Tank.h"
#include"ArmoredCar.h"
#include"AirDefenseVehicle.h"
using namespace std;

bool Round(CombatVehicle &cv1, CombatVehicle &cv2)
{
	while (!cv1.IsDestroyed() || !cv2.IsDestroyed())
	{
		cv1.Attack(&cv2);
		if (!cv2.IsDestroyed()) {
			cv2.Attack(&cv1);
		}
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
	Tank t1("Abrams","M1",150,8,8,1500);
	ArmoredCar a1("BTR","Bucefal",100,4,80);
	AirDefenseVehicle adv1;

	CombatVehicle* army1[5];
	CombatVehicle* army2[5];


	for (int i = 0; i < 5; i++)
	{
		int combat= rand() % 3+1;
		if (combat == 1) army1[i] = &t1;
		
		else if (combat == 2) army1[i] = &a1;
		
		else if (combat == 3) army1[i] = &adv1;
		
	}

	
	

	

	system("pause");
	return 0;
}