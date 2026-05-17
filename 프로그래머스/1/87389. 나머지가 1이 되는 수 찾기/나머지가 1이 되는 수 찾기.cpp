#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n%2!=0)  return 2;
    answer = n-1;
    for(int i=2; i*i<=n-1; i++){
        if(answer%i!=0) continue;
        if(n%i==1){
            answer = i;
            break;
        }
    }
    
    return answer;
}