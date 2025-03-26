//sum(1) = 2

bool f(int a, int b) {
	if (a < 0) {
		-a;
	}
	if (b < 0) {
		-b;
	}

	if (a < b) {
		return false;
	}

	if (a < 10) {
		return a == b;
	}

	return f(a / 10, b - (a % 10));
}