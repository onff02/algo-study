#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int loc = 1;
    while(num>0){
        int n = num%10;
        if(n==k){
            answer = loc;
        }
        loc ++;
        num /= 10;
    }
    if(answer == 0) return -1;
    return (loc - answer);
}