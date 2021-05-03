#include <iostream>
#include <vector>

using namespace std;

long long arr[1000001];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

long long binary(int n) {
	vector<int> vtr;
	long long value = 0;
	while (n) {
		vtr.push_back(n % 2);
		n /= 2;
	}
	for (int i = vtr.size() - 1; i >= 0; i--) {
		value = value * 10 + vtr[i];
	}
	return value;
}

void arrBinary() {
	arr[0] = 0; arr[1] = 1;
	for (int i = 2; i <= 1000000; i++) {
		arr[i] = binary(i);
	}
}

int main() {
	fastIO();
	arrBinary();
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		int count = 0;
		int i = 1;
		while (arr[i] <= n) {
			count++;
			i++;
		}
		cout << count << endl;
	}
}