#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//과잉수 출력 프로그램 구현하기



int main()
{
    int a;
    cin>> a;

    vector<int> v;

    v.resize(a+1);

    //에라토스테네스의 체 // 과잉수
    for(int i=1;i<=a/2;i++)
    {
        for(int j = i*2;j<=a;j+=i)
        {
            v[j] += i;
        }
    }

    for(int i=2;i<=a;i++)
    {
        if(i < v[i])
        {
            cout<<"abundant number : "<<i<<" -> "<<v[i]<<"\n";
        }
    }

}