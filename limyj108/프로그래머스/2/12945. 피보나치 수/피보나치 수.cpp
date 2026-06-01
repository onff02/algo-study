#include <string>
#include <vector>
#define DIV 1234567

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> fib(n + 1, 0);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 2] + fib[i - 1]) % DIV;
    }
    
    return fib[n];
}