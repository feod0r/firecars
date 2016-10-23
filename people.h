#pragma once

//Базовый класс людей
class People
{
public:
	People();
	~People();
	void SetCount(int input);
	void SetFIO(char *F[20], char *I[20], char *O[20]);
	int GetCount();
	char *GetF();
	char *GetI();
	char *GetO();

private:
	int count; 
	char *fio[3][20];
};


