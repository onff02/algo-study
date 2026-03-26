#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int len = 0;
    for(int i=0; i<str1.length(); i+=len){
        len = 0;
        if(str1[i] == str2[0]){
            while(str1[i+len] == str2[len]){
                if(len == (str2.length()-1))    return 1;
                len++;
            }
        }
        len++;
    }
    return 2;
}