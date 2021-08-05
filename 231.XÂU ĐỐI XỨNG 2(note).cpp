#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(string str) {
    int n = str.size();
    int L[n][n];
    for (int i = 0; i < n; i++)
        L[i][i] = 1;
    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i + 1][j - 1] + 2;
            else
                L[i][j] = max(L[i][j - 1], L[i + 1][j]);
        }
    }
    return n - L[0][n - 1];
}
int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << solution(str) << endl;
    }
}