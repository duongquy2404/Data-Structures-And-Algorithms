#include <iostream>
#include <cstring>

using namespace std;

int n;
int arr[16][16];
int tp[16];
bool check[16];
int smallestCost = INT32_MAX;
int cost;
int cMin = INT32_MAX;

void costTraveler(int k) {
	for (int i = 2; i <= n; i++) {
		if (check[i] == true) {
			check[i] = false;
			tp[k] = i;
			cost += arr[tp[k - 1]][tp[k]];
			if (k == n) {
				if (cost + arr[tp[k]][1] < smallestCost) { smallestCost = cost + arr[tp[k]][1]; }
			}
			else if(cost+(n-k+1)*cMin<smallestCost){
				costTraveler(k + 1);
			}
			check[i] = true;
			cost -= arr[tp[k - 1]][tp[k]];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	cost = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if (cMin > arr[i][j] && arr[i][j] != 0) { cMin = arr[i][j]; }
		}
	}
	memset(tp, 0, sizeof(tp));
	memset(check, true, sizeof(check));
	tp[1] = 1;
	costTraveler(2);
	cout << smallestCost << endl;
	return 0;
}