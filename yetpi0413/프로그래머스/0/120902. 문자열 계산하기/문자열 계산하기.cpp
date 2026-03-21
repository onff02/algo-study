#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string);
    int num = 0;
    string op = "";
    ss >> answer;
    
    while(ss >> op >> num){
        if(op == "+")   answer += num;
        else    answer -= num;
    }
    
    return answer;
}