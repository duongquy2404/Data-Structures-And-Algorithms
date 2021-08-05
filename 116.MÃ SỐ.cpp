#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

bool ktso(int i, int n) {
	while (i > 0) {
		if (i % 10 < 1 || i % 10 > n) {
			return false;
		}
		i /= 10;
	}
	return true;
}

void hoanVi(string &str, int n, bool& check) {
	int i = n - 2;
	while (i >= 0 && str[i] > str[i + 1]) { i--; }
	if (i >= 0) {
		int j = n - 1;
		while (str[i] > str[j]) { j--; }
		swap(str[i], str[j]);
		int d = i + 1, c = n - 1;
		while (d <= c) {
			swap(str[d], str[c]);
			d++; c--;
		}
	}
	else { check = false; }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string str = "";
	bool check = true;
	vector<string> vtr;
	for (int i = 0; i < n; i++) {
		str += 'A' + i;
	}
	for (int i = pow(10, n - 1); i < pow(10, n); i++) {
		if (ktso(i, n)) { vtr.push_back(to_string(i)); }
	}
	while (check) {
		for (int i = 0; i < vtr.size(); i++) {
			cout << str << vtr[i] << endl;
		}
		hoanVi(str, n, check);
	}
	return 0;
}