/******************************
Extra credit main file
Written by: Brett Hirschberger
******************************/
#include "DrinkMachine.h"

int main() {
	int selection = 0;
	DrinkMachine drinkMachine;
	while (true) {
		drinkMachine.displayChoices();
		cout << "Enter your selection or type -1 to quit: ";
		cin >> selection;
		if (selection <= 5 && selection >= 1) {
			drinkMachine.buyDrink(selection);
		}
		else if (selection == -1) {
			break;
		}
		else
		{
			cout << "invalid responce" << endl;
		}
	}
	//calls destructor after user entered drinks
	drinkMachine.~DrinkMachine();
	system("PAUSE");
	return 0;
}