#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;
int a, b, dau;
vector<int> ke[1001];
bool chuaxet[1001];
void init() {
	for (int i = 0; i <= 1001; i++) {
		ke[i].clear();
		chuaxet[i] = true;
	}
}
void BFS(int u, int v) {
	queue<int> res;
	res.push(u);
	while (!res.empty()) {
		int s = res.front(); res.pop();
		chuaxet[s] = false;
		if (chuaxet[v] == false) {
			cout << "YES" << endl; return;
		}
		for (int i = 0; i < ke[s].size(); i++) {
			if (chuaxet[ke[s][i]]) {
				chuaxet[ke[s][i]] = false;
				res.push(ke[s][i]);
			}
		}
	}
	cout << "NO" << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		init();
		for (int i = 0; i < b; i++) {
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int Q; cin >> Q;
		while (Q--) {
			int x, y; cin >> x >> y;
			BFS(x, y);
			memset(chuaxet, true, sizeof(chuaxet));
		}
	}
	return 0;
}
