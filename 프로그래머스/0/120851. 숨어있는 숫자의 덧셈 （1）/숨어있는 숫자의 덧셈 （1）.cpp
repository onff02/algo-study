#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto n : my_string){
        if(n-'0'<=9 && n-'0'>=0){
            answer += (n-'0');
        }
    }
    return answer;
}