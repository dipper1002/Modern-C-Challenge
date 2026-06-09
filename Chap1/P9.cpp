#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

//소인수분해 프로그램 구현하기


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

    int num = a;
    vector<int> ans;
    for(int i=2;i<=num;i++)
    {
        if(!v[i] && num % i == 0)
        {
            ans.push_back(i);
            num /= i;
            i--;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}