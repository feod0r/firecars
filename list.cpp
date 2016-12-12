#include "list.h"
#include <stdio.h>
#include <iostream>
#include "car.h"
#include "people.h"

//�����������
list::list()
{
	Head = NULL; //����������� � ������������� ��������� ������ ���������
}

//����������
list::~list()
{
	while (Head != NULL)  //���� �� ������ �� ����� 
	{
		element *temp = Head->Next; //��������� ���������� ��� �������� ������ ���������� ��������
		delete Head; //����������� ����� ������������ ������
		Head = temp; //������ ����� �� ���������
	}
}

//������� ���������� ��������� � ������
void list::Add(FireCars x) //������� ���������� ��������� � ������
{
	element *temp = new element; //��� ������ ������ ���������� ������
	temp->x = x; //���������� x � ������� ���������  element (� x ��������� element)
	temp->Next = Head; //���������, ��� ����. ������� ��� ������ �� ������ Head
	Head = temp; //���������, ��� ��������� �������� ������� ��� ������ ��� ���������
}

//������� ����������� ������ �� ������
void list::Show() //������� ����������� ������ �� ������
{
	element *temp = Head; //���������� ���������, ������� ���������� �� ����� ������ ������ ������
	while (temp != NULL) //�� ��� ��� ���� �� �������� ������ ��������
	{
		People temppeople = temp->x.getCrew(0);
		std::cout << temppeople.getF() << " " << temppeople.getI() << " " << temppeople.getO() << endl;
		std::cout << "Number: " << temp->x.getNumber() << " Count: " << temp->x.setCount() << endl; //������� ������� x �� ������
		temp = temp->Next; //���������, ��� ����� ��� ����� ��������� �������
	}
}
