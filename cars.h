#pragma once
#include "people.h"
#include <string>

using namespace std;

//Базовый класс автомобилей
class Cars
{
public:
	Cars();
	~Cars();
	char * GetNumber();
	int GetCount();
	void SetCount(int input);
	void SetNumber(char input[50]);

private:
	int count;
	//string number;
	char *number[50];

};

//Класс пожарных машин
class FireCars: public Cars
{
public:
	FireCars();
	~FireCars();
	void SetCrew(int i, People input);
	People GetCrew(int i);

private:
	People *crew[10];

};

//Класс гражданских машин 
class CivilCars: public Cars
{
public:
	CivilCars();
	~CivilCars();
	void SetMember(int i, People input);
	People GetMember(int i);

private:
	People *member[10];

};


