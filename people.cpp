#include "people.h"
void People::SetFIO(char *F[20], char *I[20], char *O[20]) {
	*fio[1] = *F;
	*fio[2] = *I;
	*fio[3] = *O;
}
void People::SetCount(int input) {
	count = input;
}
char * People::GetF() {
	return *fio[1];
}
char * People::GetI() {
	return *fio[2];
}
char * People::GetO() {
	return *fio[3];
}
People::People() {
}
People::~People() {
}