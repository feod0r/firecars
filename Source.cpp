#include "car.h"
#include "people.h"
#include <iostream>
#include "list.h"


using namespace std;


int main() {
	FireCars newcar;
	People emin;
	list ListOfFireCars;
	cout << "Out of list start: " << endl;
	for (int i = 0; i < 10; i++)
	{
		ListOfFireCars.Add(newcar);
	}
	
	ListOfFireCars.Show();
	cout << "Out of list END. " << endl;

	cout << emin.getF();
	system("pause");
	return 0;
}