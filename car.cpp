#include "car.h"
#include "people.h"
//методы главного класса
 char * Cars::getNumber(){
	 return *number;
	}
 int Cars::setCount() {
	 return count;
 }
 void Cars::setCount(int input) {
	 count = input;
 }
 void Cars::setNumber(char input[50]) {
	 *number = input;
 }
 Cars::Cars() {
     setNumber("x999xx");
	 setCount(1);

 }
 Cars::~Cars() {
 }
 
 //методы класса пожарных машин

 void FireCars::setCrew(int i, People input) {
	 crew[i] = input;
 }
 People FireCars::getCrew(int i) {
	 return crew[i];
 }

 FireCars::FireCars() {
 }
 FireCars::~FireCars() {
 }

 //Класс гражданских машин
 void CivilCars::setMember(int i, People input) {
	 *member[i] = input;
 }
 People CivilCars::getMember(int i) {
	 return *member[i];
 }
 CivilCars::CivilCars() {
 }

 CivilCars::~CivilCars() {
 }
