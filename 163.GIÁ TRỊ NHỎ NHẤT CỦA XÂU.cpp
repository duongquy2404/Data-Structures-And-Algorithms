#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int k;
		string str;
		cin >> k >> str;
		vector<long long> vtr(256, 0);
		for (int i = 0; i < str.size(); i++) {
			vtr[str[i]]++;
		}
		while (k--) {
			int max = 0;
			int location;
			for (int i = 0; i < vtr.size(); i++) {
				if (max < vtr[i]) {
					max = vtr[i];
					location = i;
				}
			}
			vtr[location]--;
		}
		long long sum = 0;
		for (int i = 0; i < vtr.size(); i++) {
			sum += vtr[i] * vtr[i];
		}
		cout << sum << endl;
	}
	return 0;
}