#pragma once

//������� ����� �����������
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

//����� �������� �����
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

//����� ����������� ����� 
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
