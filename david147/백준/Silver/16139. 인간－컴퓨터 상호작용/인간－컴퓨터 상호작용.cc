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
int acc[200001][26];

void f() {
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    cin >> text; 

    for (int i = 1; i <= text.size(); i++) {
        for (int j = 0; j < 26; j++) acc[i][j] = acc[i - 1][j];
        acc[i][text[i - 1] - 'a']++;
    }

    cin >> n;
    char target;
    int left, right;
    for (int i = 0; i < n; i++) {
        cin >> target >> left >> right;
        cout << acc[right + 1][target - 'a'] - acc[left][target - 'a'] << '\n';
    }

    return 0;
}