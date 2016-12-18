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
	char * getNumber();
	int setCount();
	void setCount(int input);
	void setNumber(char input[50]);

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
	void setCrew(int i, People input);
	People getCrew(int i);

private:
	People crew[10];

};

//Класс гражданских машин 
class CivilCars: public Cars
{
public:
	CivilCars();
	~CivilCars();
	void setMember(int i, People input);
	People getMember(int i);

private:
	People *member[10];

};


