#include <iostream>
#include <climits>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define INF (1 << 28)

int n, m, h, maximum = INT_MIN, minimum = INT_MAX, ans;
bool flag;
vector<pair<int, int>> arr;
int dp[100];

void f() {
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr.push_back({a, b});
    }

    sort(arr.begin(), arr.end());

    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        maximum = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i].second > arr[j].second) {
                if (maximum < dp[j]) maximum = dp[j];
            }
        }
        dp[i] = maximum + 1;
    }

    // for (int i = 0; i < n; i++) cout << dp[i] << ' ';
    // cout << '\n';

    maximum = 0;
    for (int i = 0; i < n; i++) {
        if (maximum < dp[i]) maximum = dp[i];
    }

    cout << n - maximum << '\n';

    return 0;
}