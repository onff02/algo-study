#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int sub = 100;
    for(int a : array){
        if(abs(a-n) < sub){
            sub = abs(a-n);
            answer = a;
        }
        else if(abs(a-n) == sub){
            answer = a < answer ? a : answer;
        }
    }
    return answer;
}