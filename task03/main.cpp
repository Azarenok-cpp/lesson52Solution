#include "logic.h"

int main() {
	int number;
	cout << "Number: ";
	cin >> number;

	cout << "\n" << (is_power_of_three(number) ? "True" : "False") << endl;


	return 0;
}