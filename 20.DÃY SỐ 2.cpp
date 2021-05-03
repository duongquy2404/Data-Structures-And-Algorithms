#include <iostream>
#include <vector>
#include <string>

using namespace std;

string out(int arr[],int n) {
	string s;
	s += '[';
	for (int i = 0; i < n; i++) {
		s += to_string(arr[i]);
		if (i != n - 1) {
			s += ' ';
		}
	}
	s += ']';
	return s;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[10];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		string str = out(arr, n);
		while (n > 1) {
			for (int i = 0; i < n - 1; i++) {
				arr[i] = arr[i] + arr[i + 1];
			}
			n--;
			str = out(arr, n) + ' ' + str;
		}
		cout << str << endl;
	}
}