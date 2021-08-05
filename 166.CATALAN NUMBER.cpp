#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string cong(string a, string b) {
	string result = "";
	int nho = 0;
	while (a.length() < b.length()) { a = '0' + a; }
	while (a.length() > b.length()) { b = '0' + b; }
	for (int i = a.length() - 1; i >= 0; i--) {
		int so = (int)(a[i] - '0') + (int)(b[i] - '0') + nho;
		result = char(so % 10 + '0') + result;
		nho = so / 10;
	}
	if (nho > 0) {
		result = char(nho + '0') + result;
	}
	return result;
}

string nhan(string s1, string s2) {
	int len1 = s1.length();
	int len2 = s2.length();
	int len = len1 + len2;
	vector<int> a, b;
	for (int i = 0; i < len1; i++) {
		a.push_back(int(s1[i] - '0'));
	}
	for (int i = 0; i < len2; i++) {
		b.push_back(int(s2[i] - '0'));
	}
	vector<vector<int>> res(len2);
	int index = 0;
	for (int i = len2 - 1; i >= 0; i--) {
		int nho = 0, so = 0, t = 0;
		while (t < index) {
			res[index].push_back(0);
			t++;
		}
		for (int j = len1 - 1; j >= 0; j--) {
			so = a[j] * b[i] + nho;
			res[index].push_back(so % 10);
			nho = so / 10;
		}
		if (nho > 0) { res[index].push_back(nho); }
		while (res[index].size() < len) {
			res[index].push_back(0);
		}
		reverse(res[index].begin(), res[index].end());
		index++;
	}
	int nho = 0;
	string ans = "";
	for (int j = res[0].size() - 1; j >= 0; j--) {
		int so = nho;
		for (int i = 0; i < res.size(); i++) {
			so += res[i][j];
		}
		ans = char(so % 10 + '0') + ans;
		nho = so / 10;
	}
	if (nho > 0) { ans = char(nho + '0') + ans; }
	while (ans[0] == '0') {
		ans.erase(ans.begin());
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		string str[101];
		str[0] = "1"; str[1] = "1";
		for (int i = 2; i <= n; i++) {
			string tmp = "0";
			for (int j = 0; j < i; j++) {
				tmp = cong(tmp, nhan(str[j], str[i - j - 1]));
			}
			str[i] = tmp;
		}
		cout << str[n] << endl;
	}
	return 0;
}