#include "logic.h"

int find_max_digit(int n) {
	if (n < 0) {
		n = -n;
	}

	if (n < 10) {
		return n;
	}

	int digit = n % 10;

	n = find_max_digit(n / 10);

	return (digit > n ? digit : n);
}