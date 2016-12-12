#pragma once

//Базовый класс автомобилей
class Cars
{
public:
	Cars();
	~Cars();

private:

};

Cars::Cars()
{
}

Cars::~Cars()
{
}

//Класс пожарных машин
class FireCars: public Cars
{
public:
	FireCars();
	~FireCars();

private:

};

FireCars::FireCars()
{
}

FireCars::~FireCars()
{
}

//Класс гражданских машин 
class CivilCars: public Cars
{
public:
	CivilCars();
	~CivilCars();

private:

};

CivilCars::CivilCars()
{
}

CivilCars::~CivilCars()
{
}
