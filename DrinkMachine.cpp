/****************************************
Implementation file for the DrinkMachine class
Written by: Brett Hirschberger
*****************************************/
#include "DrinkMachine.h"

double DrinkMachine::inputMoney(Drink &selection) {
	double money;
	cout << "Please enter at least $" << selection.cost << " or type -1 to quit" << endl;
	cin >> money;
	while (true) {
		if (money >= selection.cost) {
			//updates drink quantities and returns change
			selection.number--;
			total += selection.cost;
			return money - selection.cost;
		}
		else if (money == -1) {
			//returns all money to the user
			return money;
		}
		else {
			cout << "That is not enough money, please enter at least $" << selection.cost << " or type -1 to quit" << endl;
			cin >> money;
		}
	}
}

void DrinkMachine::dailyReport()
{
	//displays results for the day
	int c = 0;
	cout << "**********Final Quantities***************" << endl;
	cout << "Drink name              Amount in machine" << endl;
	cout << "=========================================" << endl;
	for (int i = 0; i < 5; i++) {
		cout << drinkArray[i].name << "                " << drinkArray[i].number << endl;
	}
	cout << "Total: $" << total << endl;
}


void DrinkMachine::buyDrink(int choice) {
	double change;
	if (drinkArray[choice - 1].number > 0) {
		change = inputMoney(drinkArray[choice - 1]);
		if (change >= 0) {
			cout << "Here is your drink, $" << change << " is your change" << endl;
		}
	}
	else {
		cout << "That drink is out of stock" << endl;
	}
}

void DrinkMachine::displayChoices() {
	//displays drink choices
	int c = 1;
	int choice;
	cout << "   Drink name         Cost            Amount in machine" << endl;
	cout << "   ====================================================" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "(" << c++ << ") " << drinkArray[i].name << "               " << drinkArray[i].cost << "               " << drinkArray[i].number << endl;
	}
}

DrinkMachine::~DrinkMachine()
{
	dailyReport();
}
