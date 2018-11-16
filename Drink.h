/****************************************
Header file for the drink struct
Written by: Brett Hirschberger
*****************************************/
#define Drink_H
#include <iostream>

using namespace std;
struct Drink {
	string name;
	float cost;
	int number;
	Drink(string n, float c, int num);
};
