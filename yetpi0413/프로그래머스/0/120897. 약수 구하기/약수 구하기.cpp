#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i=1;
    for(; i*i<=n; i++){
        if(n%i==0){
            answer.push_back(i);
            answer.push_back(n/i);
        }
    }
    if((i-1)*(i-1)==n)  answer.pop_back();
    
    sort(answer.begin(), answer.end());
    return answer;
}