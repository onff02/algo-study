#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int flag = 0;
    for(char c : my_string){
        if(flag!=0){
            if(c-'0'>9 || c-'0'<0){
                answer += flag;
                flag = 0;
                continue;
            }
            else{
                flag = 10*flag + (c-'0');
                continue;
            }
        }
        
        if(c-'0'>9 || c-'0'<0)  continue;
        else    flag = c-'0';
    }
    if(flag != 0)   answer += flag;
    
    return answer;
}