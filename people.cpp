#include "people.h"
void People::setFIO(char F[20], char I[20], char O[20]) {
	*fio[0] = F;
	*fio[1] = I;
	*fio[2] = O;
}
void People::setCount(int input) {
	count = input;
}
int People::getCount() {
	return count;
}
char * People::getF() {
	return *fio[0];
}
char * People::getI() {
	return *fio[1];
}
char * People::getO() {
	return *fio[2];
}
People::People() {
	setFIO("Stringman", "Ibragim", "Eminovich");
	setCount(1);
}
People::~People() {
}