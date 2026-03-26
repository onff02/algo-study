#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto& s : my_string){
        s = tolower(s);
    }
    sort(my_string.begin(), my_string.end());
    answer = my_string;
    return answer;
}