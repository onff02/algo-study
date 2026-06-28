#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> ans;
    for(char c : s){
        ans.push_back(c-'A');
    }
    sort(ans.begin(),ans.end(), greater<int>());
    for(int n : ans){
        answer += n+'A';
    }
    return answer;
}