#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int last = 10;
    for(int n : arr){
        if(n != last) answer.push_back(n);
        last = n;
    }

    return answer;
}