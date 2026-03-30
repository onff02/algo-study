#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x;
    vector<int> y;
    for(auto d : dots){
        x.push_back(d[0]);
        y.push_back(d[1]);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    answer = abs(x[1]-x[2])*abs(y[1]-y[2]);
    return answer;
}