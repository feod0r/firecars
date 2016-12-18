#include "list.h"
#include <stdio.h>
#include <iostream>
#include "car.h"
#include "people.h"

//конструкция
list::list()
{
	Head = NULL; //Конструктор и инициализация указателя пустым значением
}

//деструктор
list::~list()
{
	while (Head != NULL)  //Пока по адресу не пусто 
	{
		element *temp = Head->Next; //Временная переменная для хранения адреса следующего элемента
		delete Head; //Освобождаем адрес обозначающий начало
		Head = temp; //Меняем адрес на следующий
	}
}

//Функция добавления элементов в список
void list::Add(FireCars x) //Функция добавления элементов в список
{
	element *temp = new element; //При каждом вызове выделяется память
	temp->x = x; //Записываем x в элемент структуры  element (в x структуры element)
	temp->Next = Head; //Указываем, что след. элемент это объект по адресу Head
	Head = temp; //Указываем, что последний активный элемент это только что введенный
}

//Функция отображения списка на экране
void list::Show() //Функция отображения списка на экране
{
	element *temp = Head; //Определяем указатель, который изначально он равен адресу начала списка
	while (temp != NULL) //До тех пор пока не встретит пустое значение
	{
		People temppeople = temp->x.getCrew(0);
		std::cout << temppeople.getF() << " " << temppeople.getI() << " " << temppeople.getO() << endl;
		std::cout << "Number: " << temp->x.getNumber() << " Count: " << temp->x.setCount() << endl; //Выведет элемент x из списка
		temp = temp->Next; //Указываем, что далее нам нужен следующий элемент
	}
}
