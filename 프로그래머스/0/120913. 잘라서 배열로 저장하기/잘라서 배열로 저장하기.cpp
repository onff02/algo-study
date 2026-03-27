#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int i=0;
    while(i<my_str.length()){
        string str = "";
        int len = 0;
        for(len=0; len<n&&i+len<my_str.length(); len++){
            str += my_str[i+len];
        }
        answer.push_back(str);
        i+=len;
    }
    return answer;
}