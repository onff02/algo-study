#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(char c : s){
        answer = c-'A' >= 0 ? false : true;
        if(answer == false) break;
    }
    if(answer == true){
        answer = s.length() == 4 || s.length() == 6 ? true : false;
    }
    return answer;
}