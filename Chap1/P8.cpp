#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

//모든 세자리 암스트롱 수 출력(각 자리수의 세제곱의 합이 그 값이 되는 수)


int main()
{
    int a = 1000;

    vector<int> v;

    v.resize(a+1);

    for(int i=100;i<1000;i++)
    {
        if(pow(i%10,3) + pow((i%100)/10,3)+pow(i/100,3) == i)
        {
            cout<< "Armstrong Number : "<<i<<"\n";
        }
    }

}