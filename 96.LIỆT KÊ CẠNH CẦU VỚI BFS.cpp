#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int arr[5000000][3];
vector<int> vtr[1001];
int kt[1001];

void in(int e) {
	for (int i = 1; i <= e; i++) {
		cin >> arr[i][1] >> arr[i][2];
		vtr[arr[i][1]].push_back(arr[i][2]);
		vtr[arr[i][2]].push_back(arr[i][1]);
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
		vector<pair<int, int>> res;
		int v, e; cin >> v >> e;
		for (int i = 1; i <= v; i++) {
			vtr[i].clear();
		}
		in(e);
		int k = countLT(v);
		for (int i = 1; i <= e; i++) {
			for (int j = 1; j <= v; j++) {
				vtr[j].clear();
			}
			for (int k = 1; k <= e; k++) {
				if (k != i) {
					vtr[arr[k][1]].push_back(arr[k][2]);
					vtr[arr[k][2]].push_back(arr[k][1]);
				}
			}
			if (countLT(v) > k) {
				res.push_back({ arr[i][1], arr[i][2] });
			}
		}
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) {
			cout << res[i].first << " " << res[i].second << " ";
		}
		cout << endl;
	}
	return 0;
}