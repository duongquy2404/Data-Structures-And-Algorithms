#include <iostream>
#include <cstring>

using namespace std;

int arr[500000][3];
int brr[1001][1001];
int dinh[1001];

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
	int i;
	cout << u << " ";
	dinh[u] = 1;
	for (i = 1; i <= v; i++) {
		if (dinh[i] == 0 && brr[u][i] == 1) {
			DFS(i,v);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int v, e, u; cin >> v >> e >> u;
		memset(brr, 0, sizeof(brr));
		memset(dinh, 0, sizeof(dinh));
		in(e);
		DFS(u,v);
		cout << endl;
	}
	return 0;
}