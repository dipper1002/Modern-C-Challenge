#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//가장 긴 콜라츠 수열 출력 프로그램
// DP로 최적화
vector<int> dp;
int n;
int solve(int pos)
{
    if(dp[pos]!=0)return dp[pos];
    if(pos == 1)return dp[pos] = 1;
    if(pos%2==0)
    {
        return dp[pos] = solve(pos/2) + 1;
    }
    else
    {
        return dp[pos] = solve(pos*3+1) + 1;
    }
    
}

void printArr(int pos)
{
    cout<<pos<<"-";
    if(pos==1)return;
    if(pos%2==0)
    {
        printArr(pos/2);
    }
    else
    {
        printArr(pos*3+1);
    }
}

int main()
{
    cin >> n;
    
    dp.resize(10000000);
    for(int i=1;i<=n;i++)
    {
        solve(i);
    }
    int big = 1;
    for(int i=1;i<=n;i++)
    {
        if(dp[i] > dp[big])
        {
            big = i;
        }
    }
    cout<<"num : "<<big<<", value : "<<dp[big]<<"\n";
    printArr(big);
}