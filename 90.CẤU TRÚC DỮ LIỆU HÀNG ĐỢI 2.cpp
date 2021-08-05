#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	queue<int> que;
	while (test--) {
		string s; cin >> s;
		if (s == "PUSH") {
			int n; cin >> n;
			que.push(n);
		}
		else if (s == "POP") {
			if(!que.empty()){ que.pop(); }
		}
		else {
			if (que.empty()) {
				cout << "NONE" << endl;
			}
			else { cout << que.front() << endl; }
		}
	}
}