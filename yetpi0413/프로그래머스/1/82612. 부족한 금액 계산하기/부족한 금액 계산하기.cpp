using namespace std;

long long solution(int price, int money, int count)
{
    long long res = ((long long) price + (long long)price*count)*count/2 - money ; 
    long long answer = res>0?res:0;

    return answer;
}