#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> vtr;
int sum;
int dem;
string str;

bool prime(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) { return false; }
	}
	return true;
}

void triangle(int n, int p, int s, string str) {
	if (dem == n && sum == s) { vtr.push_back(str); return; }
	for (int i = p + 1; i <= 200; i++) {
		if (prime(i)) {
			if (sum + i <= s) {
				sum += i;
				dem++;
				triangle(n, i, s, str + to_string(i) + ' ');
				dem--;
				sum -= i;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, p, s; cin >> n >> p >> s;
		dem = 0; sum = 0;
		triangle(n, p, s, "");
		sort(vtr.begin(), vtr.end());
		cout << vtr.size() << endl;
		for (int i = 0; i < vtr.size(); i++) {
			cout << vtr[i] << endl;
		}
		vtr.clear();
	}
	return 0;
}