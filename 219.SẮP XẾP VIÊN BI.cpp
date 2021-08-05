#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	string str; cin >> str;
	int count = 0;
	int x = 0, t = 0, d = 0;
	for (int i = 0; i < test; i++) {
		if (str[i] == 'X') {
			x++;
		}
		else if (str[i] == 'T') {
			t++;
		}
		else { d++; }
	}
	int first = 0, middel = x, last = x + t;
	for (int i = 0; i < test; i++) {
		if (str[i] == 'X' && i >= middel) {
			if (i >= last) {
				for (int j = 0; j < middel; j++) {
					if (str[j] == 'D') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
			else {
				for (int j = 0; j < middel; j++) {
					if (str[j] == 'T') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
		}
		else if (str[i] == 'T' && i < middel && i >= last) {
			if (i < middel) {
				for (int j = middel; j < last; j++) {
					if (str[j] == 'X') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
			else if (i >= last) {
				for (int j = middel; j < last; j++) {
					if (str[j] == 'D') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
		}
		else if (str[i] == 'D' && i < last) {
			if (i >= middel) {
				for (int j = last; j < test; j++) {
					if (str[j] == 'T') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
			else {
				for (int j = last; j < test; j++) {
					if (str[j] == 'X') {
						swap(str[i], str[j]);
						count++; break;
					}
				}
			}
		}
	}
	int k = 0;
	for (int i = 0; i < test; i++) {
		if (str[i] == 'X' && i >= middel) { k++; }
		if (str[i] == 'T' && (i < middel || i >= last)) {
			k++;
		}
		if (str[i] == 'D' && i < last) { k++; }
	}
	cout << count + (k / 3) * 2;
	return 0;
}