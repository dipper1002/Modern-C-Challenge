#include<iostream>
#include<algorithm>
using namespace std;

//최대 공약수 프로그램 구현하기


//유클리드 호제법
int gcd(int a, int b)
{
    int c = a % b;
    if(c==0)return b;
    return gcd(b,c);
}


int main()
{
    int a,b;
    cin>> a >> b;
    cout << gcd(max(a,b),min(a,b));

}