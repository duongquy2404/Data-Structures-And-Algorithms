#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

vector<string> vtr;

void arrSixEight(int n) {
	queue<string> que;
	que.push("6"); que.push("8");
	long long x = 0;
	for (int i = 1; i <= n; i++) {
		x += pow(2, i);
	}
	while (x--) {
		string str1 = que.front();
		que.pop();
		vtr.push_back(str1);
		string str2 = str1;
		que.push(str1.append("6"));
		que.push(str2.append("8"));
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		arrSixEight(n);
		int m = vtr.size();
		cout << m << endl;
		for (int i = m - 1; i >= 0; i--) {
			cout << vtr[i] << " ";
		}
		cout << endl;
		vtr.clear();
	}
}