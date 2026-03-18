#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> iter;
    
    for(char c : s){
        iter[c]++;
    }
    for(auto n : iter){
        if(n.second == 1){
            answer += n.first;
        }
    }
    return answer;
}