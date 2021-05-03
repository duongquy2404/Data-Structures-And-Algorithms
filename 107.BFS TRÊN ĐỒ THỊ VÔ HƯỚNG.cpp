#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

vector<int> vtr[1001];
bool kt[1001];

void in(int e) {
	int a, b;
	for (int i = 1; i <= e; i++) {
		cin >> a >> b;
		vtr[a].push_back(b);
		vtr[b].push_back(a);
	}
}

void BFS(int u) {
	queue<int> que;
	que.push(u);
	while (que.size() > 0) {
		int front = que.front();
		cout << front << " ";
		que.pop();
		kt[front] = true;
		for (int i = 0; i < vtr[front].size(); i++) {
			if (!kt[vtr[front][i]]) {
				kt[vtr[front][i]] = true;
				que.push(vtr[front][i]);
			}
		}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int v, e, u;
		cin >> v >> e >> u;
		for (int i = 0; i < 1001; i++) { vtr[i].clear(); }
		memset(kt, false, sizeof(kt));
		in(e);
		BFS(u);
	}
	return 0;
}