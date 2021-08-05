#include <iostream>
#include <cstring>
#include <stack>

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
		brr[arr[i][2]][arr[i][1]] = 1;
	}
}

void DFS(int u, int v) {
	crr[u] = 1;
	for (int i = 1; i <= v; i++) {
		if (crr[i] == 0 && brr[u][i] == 1) {
			drr[i] = u;
			DFS(i, v);
		}
	}
}

void duongDiDFS(int s, int t) {
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
		DFS(s, v);
		duongDiDFS(s, t);
	}
	return 0;
}