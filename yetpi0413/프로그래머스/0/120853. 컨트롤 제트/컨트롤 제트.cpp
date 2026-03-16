#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    int tmp = 0;
    string num = "";
    for(auto e : s){
        if(e == ' '){
            if(num == "Z"){
                answer -= tmp;
                num = "";
                continue;
            }
            tmp = stoi(num);
            answer += tmp;
            num = "";
            continue;
        }
        num += e;
    }
    if(num == "Z"){
        answer -= tmp;
        num = "";
    }
    else{
        tmp = stoi(num);
        answer += tmp;
    }
    
    return answer;
}