#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int arr[101][101][101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int x, y, z; cin >> x >> y >> z;
		string strX, strY, strZ; cin >> strX >> strY >> strZ;
		memset(arr, 0, sizeof(arr));
		for (int i = 1; i <= x; i++) {
			for (int j = 1; j <= y; j++) {
				for (int k = 1; k <= z; k++) {
					if (strX[i-1] == strY[j-1] && strY[j-1] == strZ[k-1]) {
						arr[i][j][k] = arr[i - 1][j - 1][k - 1] + 1;
					}
					else {
						arr[i][j][k] = max(arr[i - 1][j][k], max(arr[i][j - 1][k], arr[i][j][k - 1]));
					}
				}
			}
		}
		cout << arr[x][y][z] << endl;
	}
	return 0;
}