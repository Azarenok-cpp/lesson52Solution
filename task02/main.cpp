#include "logic.h"

int main() {
	int a, b;
	cout << "a b: ";
	cin >> a >> b;

	cout << "\n" << (f(a, b) ? "True" : "False") << endl;


	return 0;
}