#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    for(t; t>=1; t--){
        n*=2;
    }
    answer = n;
    return answer;
}