#pragma once
#include "car.h"

struct element
{
	FireCars x; //Инфополе. значения из x будут передаваться в список
	element *Next; //Адресное поле
};

class list
{
	element *Head;
public:
	list(); //конструктор
	~list(); //деструктор
	void Add(FireCars x); //Функция для добавления значений в список
	void Show(); //Функция для отображения списка на экране
private:

};

