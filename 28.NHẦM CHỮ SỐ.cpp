#include <iostream>

using namespace std;

int sumMax(int a, int b) {
	int i = 0, j = 0, x = 10, y = 10;
	while (a > 0) {
		if (a % 10 == 5) {
			i = i + 6 * x;
		}
		else {
			i = i + (a % 10) * x;
		}
		x *= 10;
		a /= 10;
	}
	while (b > 0) {
		if (b % 10 == 5) {
			j = j + 6 * y;
		}
		else {
			j = j + (b % 10) * y;
		}
		y *= 10;
		b /= 10;
	}
	return i / 10 + j / 10;
}

int sumMin(int a, int b) {
	int i = 0, j = 0, x = 10, y = 10;
	while (a > 0) {
		if (a % 10 == 6) {
			i = i + 5 * x;
		}
		else {
			i = i + (a % 10) * x;
		}
		x *= 10;
		a /= 10;
	}
	while (b > 0) {
		if (b % 10 == 6) {
			j = j + 5 * y;
		}
		else {
			j = j + (b % 10) * y;
		}
		y *= 10;
		b /= 10;
	}
	return i / 10 + j / 10;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << sumMin(a, b) << " " << sumMax(a, b);
}