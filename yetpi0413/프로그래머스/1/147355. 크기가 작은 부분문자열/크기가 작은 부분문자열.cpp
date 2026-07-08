#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int window = p.length();
    for(int i=0; i<=t.size()-window; i++){
        string s = t.substr(i, window);
        if(stoll(s)<=stoll(p))    answer ++;
    }
    return answer;
}