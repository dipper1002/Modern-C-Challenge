#include<iostream>
using namespace std;

//3이나 5로 나누어 떨어지는 자연수의 합을 계산하는 프로그램 구현하기

int main()
{
    int n;
    int sum = 0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a % 3 == 0 || a % 5 == 0)
        {
            sum += a;
        }
    }

    cout << sum;
}