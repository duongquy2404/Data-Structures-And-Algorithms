#include <iostream>
#include <queue>

using namespace std;

int solve(int s, int t) {
	queue<int> q; q.push(s);
	queue<int> c; c.push(0);
	int visited[10000] = { 0 };
	visited[s] = 1;
	while (q.front() != t) {
		int y = q.front(); q.pop();
		int x = c.front(); c.pop();
		if (y - 1 > 0 && y - 1 < 10000 && visited[y - 1] == 0) {
			q.push(y - 1);
			c.push(x + 1);
			visited[y - 1] = 1;
		}
		if (y * 2 > 0 && y * 2 < 10000 && visited[y * 2] == 0) {
			q.push(y * 2);
			c.push(x + 1);
			visited[y * 2] = 1;
		}
	}
	return c.front();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int s, n; cin >> s >> n;
		cout << solve(s, n) << endl;
	}
	return 0;
}