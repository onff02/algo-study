#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    int len = 0;
    string ans = "";
    for(int i=0; i<numbers.length(); i+=len){
        switch(numbers[i]){
            case 'z':
                ans += '0';
                len = 4;
                break;
                
            case 'o':
                ans += '1';
                len = 3;
                break;
                
            case 't':
                switch(numbers[i+1]){
                    case 'w':
                        ans += '2';
                        len = 3;
                        break;
                        
                    case 'h':
                        ans += '3';
                        len = 5;
                        break;
                }
                break;
                
            case 'f':
                switch(numbers[i+1]){
                    case 'o':
                        ans += "4";
                        len = 4;
                        break;
                        
                    case 'i':
                        ans += "5";
                        len = 4;
                        break;
                }
                break;
            
            case 's':
                switch(numbers[i+1]){
                    case 'i':
                        ans += "6";
                        len = 3;
                        break;
                        
                    case 'e':
                        ans += "7";
                        len = 5;
                        break;
                }
                break;
                
            case 'e':
                ans += "8";
                len = 5;
                break;
                
            case 'n':
                ans += "9";
                len = 4;
                break;
        }
    }
    answer = stoll(ans);
    return answer;
}