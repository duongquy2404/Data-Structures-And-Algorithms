#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int arr[10][10];
bool check[10][10];
vector<string> vtr;

void movingMaze(int i, int j, string str) {
	if (arr[1][1] == 0 || arr[n][n] == 0) { return; }
	if (i == n && j == n) { vtr.push_back(str); }
	if (arr[i + 1][j] == 1 && i < n && check[i + 1][j]) {
		check[i][j] = false;
		movingMaze(i + 1, j, str + 'D');
		check[i][j] = true;
	}
	if (arr[i][j + 1] == 1 && j < n && check[i][j + 1]) {
		check[i][j] = false;
		movingMaze(i, j + 1, str + 'R');
		check[i][j] = true;
	}
	if (arr[i][j - 1] == 1 && j > 1 && check[i][j - 1]) {
		check[i][j] = false;
		movingMaze(i, j - 1, str + 'L');
		check[i][j] = true;
	}
	if (arr[i - 1][j] == 1 && i > 1 && check[i - 1][j]) {
		check[i][j] = false;
		movingMaze(i - 1, j, str + 'U');
		check[i][j] = true;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> arr[i][j];
				check[i][j] = true;
			}
		}
		movingMaze(1, 1, "");
		if (vtr.size()==0) {
			cout << -1 << endl;
		}
		else {
			sort(vtr.begin(), vtr.end());
			for (int i = 0; i < vtr.size(); i++) {
				cout << vtr[i] << " ";
			}
			cout << endl;
		}
		vtr.clear();
	}
	return 0;
}