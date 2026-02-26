#include <iostream>
#include <climits>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define INF (1 << 28)

int n, m, h, maximum = INT_MIN, minimum = INT_MAX, ans;
bool flag;
int dp[10000][3];

void f() {
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> dp[0][1];

    int cur;
    for (int i = 1; i < n; i++) {
        cin >> cur;
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = dp[i - 1][0] + cur;
        dp[i][2] = dp[i - 1][1] + cur;

        // cout << dp[i][0] << ' ' << dp[i][1] << ' ' << dp[i][2] << '\n';
    }

    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << '\n';

    return 0;
}