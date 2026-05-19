#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num_y=0;
    int num_p=0;
    
    for(char c : s){
        c = tolower(c);
        if(c=='y')  num_y++;
        else if(c=='p') num_p++;
    }
    answer = num_y==num_p?true: false;
    return answer;
}