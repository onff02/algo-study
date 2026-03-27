#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int num : array){
        string str = to_string(num);
        for(char c : str){
            if(c == '7')    answer++;
        }
    }
    return answer;
}