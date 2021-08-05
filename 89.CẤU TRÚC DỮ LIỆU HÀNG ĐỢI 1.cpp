#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		queue<int> que;
		while (n--) {
			int m; cin >> m;
			if (m == 1) {
				cout << que.size() << endl;
			}
			else if (m == 2) {
				if (que.empty()) {
					cout << "YES" << endl;
				}
				else { cout << "NO" << endl; }
			}
			else if (m == 3) {
				int p; cin >> p;
				que.push(p);
			}
			else if (m == 4) {
				if (!que.empty()) { que.pop(); }
			}
			else if (m == 5) {
				if (que.empty()) {
					cout << -1 << endl;
				}
				else { cout << que.front() << endl; }
			}
			else if (m == 6) {
				if (que.empty()) {
					cout << -1 << endl;
				}
				else { cout << que.back() << endl; }
			}
		}
	}
}