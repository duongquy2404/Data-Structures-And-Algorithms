#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int count = 0;
		while (n > 0) {
			if (n >= 1000) {
				count += n / 1000;
				n = n % 1000;
			}
			else if (n >= 500) {
				count += n / 500;
				n = n % 500;
			}
			else if (n >= 200) {
				count += n / 200;
				n = n % 200;
			}
			else if (n >= 100) {
				count += n / 100;
				n = n % 100;
			}
			else if (n >= 50) {
				count += n / 50;
				n = n % 50;
			}
			else if (n >= 20) {
				count += n / 20;
				n = n % 20;
			}
			else if (n >= 10) {
				count += n / 10;
				n = n % 10;
			}
			else if (n >= 5) {
				count += n / 5;
				n = n % 5;
			}
			else if (n >= 2) {
				count += n / 2;
				n = n % 2;
			}
			else if (n >= 1) {
				count += n / 1;
				n = n % 1;
			}
		}
		cout << count << endl;
	}
}