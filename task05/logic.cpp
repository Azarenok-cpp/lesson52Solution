#include "logic.h"

int get_power(int a, int power) {
	if (power < 0 || a == 0) {
		return 0;
	}

	if (power == 0) {
		return 1;
	}

	return 0;
}