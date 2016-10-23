#include "cars.h"
#include "people.h"
//методы главного класса
 char * Cars::GetNumber(){
	 return *number;
	}
 int Cars::GetCount() {
	 return count;
 }
 void Cars::SetCount(int input) {
	 count = input;
 }
 void Cars::SetNumber(char input[50]) {
	 *number = input;
 }
 Cars::Cars() {
 }
 Cars::~Cars() {
 }
 
 //методы класса пожарных машин

 void FireCars::SetCrew(int i, People input) {
	 *crew[i] = input;
 }
 People FireCars::GetCrew(int i) {
	 return *crew[i];
 }

 FireCars::FireCars() {
 }
 FireCars::~FireCars() {
 }

 //Класс гражданских машин
 void CivilCars::SetMember(int i, People input) {
	 *member[i] = input;
 }
 People CivilCars::GetMember(int i) {
	 return *member[i];
 }
 CivilCars::CivilCars() {
 }

 CivilCars::~CivilCars() {
 }