#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i=2;
    while(i<=n){
        if(n%i==0){
            n /= i;
            if(find(answer.begin(),answer.end(),i) == answer.end()){
                answer.push_back(i);
            }
            i=2;
            continue;
        }
        i++;
    }
    return answer;
}