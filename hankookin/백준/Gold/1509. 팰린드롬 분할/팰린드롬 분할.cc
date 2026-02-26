#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;
    int n = word.size();

    vector<vector<bool>> isPal(n, vector<bool>(n,false));
    vector<int> res(n+1, 1e9);

    for (int i=0; i<n; i++) isPal[i][i] = true;
    for (int i=0; i<n-1; i++) if (word[i] == word[i+1]) isPal[i][i+1] = true;
    for (int len = 3; len <= n; len++) {
        for (int start = 0; start <= n - len; start++) {
            int end = start + len - 1;
            if (word[start] == word[end] && isPal[start + 1][end - 1]) {
                isPal[start][end] = true;
            }
        }
    }
    res[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (isPal[j - 1][i - 1]) {
                res[i] = min(res[i], res[j - 1] + 1);
            }
        }
    }
    cout << res[n] << '\n';

    return 0;
}

