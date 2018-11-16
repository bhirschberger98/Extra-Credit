/****************************************
Header file for the DrinkMachine class
Written by: Brett Hirschberger
*****************************************/
#define DRINKMACHINE_H
#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
#include "Drink.h"
using namespace std;
class DrinkMachine
{
private:
	Drink drinkArray[5] = { Drink("Cola",1.00,20),
		Drink("Root beer",1.00,20),
		Drink("Orange soda",1.00,20),
		Drink("Grape soda",1.00,20),
		Drink("Bottled water",1.50,20) };
	double total=0;
	double inputMoney(Drink &selection);
	void dailyReport();

public:
	void buyDrink(int selection);
	void displayChoices();
	~DrinkMachine();
};