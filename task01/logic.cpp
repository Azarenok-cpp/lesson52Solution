//sum digits

int sum_number_digits(int number) {
	if (number < 0) {
		number = -number;
	}

	if (number < 10) {
		return number;
	}

	return sum_number_digits(number / 10) + number % 10;
}

int count_number_digits(int number) {
	if (number < 0) {
		number = -number;
	}

	if (number < 10) {
		return 1;
	}

	return count_number_digits(number / 10) + 1;
}