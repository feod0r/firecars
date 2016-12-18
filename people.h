#pragma once

//Базовый класс людей
class People
{
public:
	People();
	~People();
	void setCount(int input);
	void setFIO(char F[20], char I[20], char O[20]);
	int getCount();
	char *getF();
	char *getI();
	char *getO();

private:
	int count; 
	char *fio[3][20];
};


