#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int div = 1;
    int mul = n*m;
    for(int i=2; i<=min(n,m); i++){
        if(n%i==0 && m%i==0){
            div = i;
        }
    }
    for(int i=max(n,m); i<n*m; i++){
        if(i%n==0 && i%m==0){
            mul = i;
            break;
        }
    }
    answer.push_back(div);
    answer.push_back(mul);
    return answer;
}