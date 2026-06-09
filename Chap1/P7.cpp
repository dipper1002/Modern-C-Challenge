#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//친화수 짝을 출력하는 프로그램 구현하기(1,000,000보다 작은 친화수)



int main()
{
    int a = 1000000;

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
        if(i == v[v[i]] && i != v[i])
        {
            cout<<"amicable number : "<<i<<" <-> "<<v[i]<<"\n";
            v[v[i]]-=1;//2회 출력 방지
        }
    }

}