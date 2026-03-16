#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = 0;
    int sum = 0;
    for(int s : sides){
        if(s>max)   max = s;
        sum += s;
    }
    answer = sum-max > max ? 1 : 2;
    return answer;
}