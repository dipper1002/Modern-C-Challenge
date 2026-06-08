#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//주어진 수보다 작은 가장 큰 소수를 계산하는 프로그램 구현하기



int main()
{
    int a,b;
    cin>> a;

    vector<bool> v;

    v.resize(a+1);

    //에라토스테네스의 체
    for(int i=2;i<a/2;i++)
    {
        if(!v[i])
        {
            for(int j = i*2;j<a;j+=i)
            {
                v[j] = true;
            }
        }
    }

    for(int i=a-1;i>7;i--)
    {
        if(!v[i] && !v[i-6])
        {
            cout<<"sexy prime : (" <<i<<","<<i-6<<")\n";
        }
    }

}