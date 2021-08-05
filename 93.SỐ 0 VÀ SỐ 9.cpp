#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

vector<string> vtr;

void arrOneNine() {
	queue<string> que;
	que.push("9");
	int count = 1000;
	while (count--) {
		string str1 = que.front();
		que.pop();
		vtr.push_back(str1);
		string str2 = str1;
		que.push(str1.append("0"));
		que.push(str2.append("9"));
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	arrOneNine();
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int i;
		for (i = 0; i < vtr.size(); i++) {
			if (stoll(vtr[i]) % n == 0) { break; }
		}
		cout << vtr[i] << endl;
	}
}