#pragma once
#include "car.h"

struct element
{
	FireCars x; //��������. �������� �� x ����� ������������ � ������
	element *Next; //�������� ����
};

class list
{
	element *Head;
public:
	list(); //�����������
	~list(); //����������
	void Add(FireCars x); //������� ��� ���������� �������� � ������
	void Show(); //������� ��� ����������� ������ �� ������
private:

};

