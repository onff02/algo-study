#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    stringstream ss;
    
    for(string q : quiz){
        ss.str(q);
        ss.clear();
        int num1, num2, num3;
        string op, eq;
        ss >> num1 >> op >> num2 >> eq >> num3;
        
        if(op=="+"){
            if(num3 == num1+num2)   answer.push_back("O");
            else    answer.push_back("X");
        }
        else{
            if(num3 == num1-num2)   answer.push_back("O");
            else    answer.push_back("X");
        }
    }
    return answer;
}