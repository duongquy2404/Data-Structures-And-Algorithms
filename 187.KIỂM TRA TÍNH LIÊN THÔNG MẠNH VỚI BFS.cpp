#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

vector<int> vtr[1001];
int kt[1001];

void in(int e) {
	int a, b;
	for (int i = 1; i <= e; i++) {
		cin >> a >> b;
		vtr[a].push_back(b);
		//vtr[b].push_back(a);
	}
}

void BFS(int u) {
	queue<int> que;
	que.push(u);
	kt[u] = 1;
	while (!que.empty()) {
		int front = que.front();
		que.pop();
		kt[front] = 1;
		for (int i = 0; i < vtr[front].size(); i++) {
			if (!kt[vtr[front][i]]) {
				kt[vtr[front][i]] = 1;
				que.push(vtr[front][i]);
			}
		}
	}
}

int countLT(int v) {
	int k = 0;
	memset(kt, 0, sizeof(kt));
	for (int i = 1; i <= v; i++) {
		if (kt[i] == 0) {
			k++;
			BFS(i);
		}
	}
	return k;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int v, e; cin >> v >> e;
		memset(vtr, 0, sizeof(vtr));
		in(e);
		int k = countLT(v);
		if (k == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}