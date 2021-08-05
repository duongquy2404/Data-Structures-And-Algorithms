#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<long long> vtr;

void posc(long long n) {
	int t = 0;
	long long mu = 1;
	while (n / 2 > 0) {
		t++;
		if (t == 1) {
			vtr.push_back(2);
			mu = 2;
		}
		else {
			mu *= 2;
			vtr.push_back(mu);
		}
		n /= 2;
	}
}

long long val(long long k, long long n, long long pos) {
	if (k % 2 == 1) { return 1; }
	if (k < vtr[pos]) {
		val(k, n / 2, pos - 1);
	}
	else if (k == vtr[pos]) {
		return n % 2;
	}
	else if (k > vtr[pos]) {
		val(2 * vtr[pos] - k, n / 2, pos - 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		long long n, l, r, res = 0;
		vtr.clear();
		cin >> n >> l >> r;
		posc(n);
		for (long long i = l; i <= r; i++) {
			res += val(i, n, vtr.size() - 1);
		}
		cout << res << endl;
	}
	return 0;
}