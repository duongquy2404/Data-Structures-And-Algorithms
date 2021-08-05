#include <iostream>
#include <cstring>
#include <stack>
#include <queue>

using namespace std;

int arr[500000][3];
int brr[1001][1001];
int crr[1001];
int drr[1001];

void in(int e) {
	for (int i = 1; i <= e; i++) {
		for (int j = 1; j <= 2; j++) {
			cin >> arr[i][j];
		}
		brr[arr[i][1]][arr[i][2]] = 1;
	}
}

void BFS(int u, int v) {
	crr[u] = 1;
	queue<int> que;
	que.push(u);
	while (!que.empty()) {
		int front = que.front();
		que.pop();
		crr[front] = 1;
		for (int i = 1; i <= v; i++) {
			if (crr[i] == 0 && brr[front][i] == 1) {
				crr[i] = 1;
				drr[i] = front;
				que.push(i);
			}
		}
	}
}

void duongDiBFS(int s, int t) {
	if (crr[t] == 1) {
		stack<int> stk;
		while (t > 0) {
			stk.push(t);
			t = drr[t];
		}
		while (!stk.empty()) {
			cout << stk.top() << " ";
			stk.pop();
		}
		cout << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int v, e, s, t; cin >> v >> e >> s >> t;
		memset(brr, 0, sizeof(brr));
		memset(crr, 0, sizeof(crr));
		memset(drr, 0, sizeof(drr));
		in(e);
		BFS(s, v);
		duongDiBFS(s, t);
	}
	return 0;
}