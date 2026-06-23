#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//로마 숫자 표기법 변환 프로그램

char table[] =
{
    'I', 'V', 'X', 'L', 'C','D','M'
};
string rule[] =
{
    "0","0","00","000","01","1","10","100","1000","02","2"
};

string RomanNum(int n, int pos)
{
    if(n==0)return "";
    string ans = "";
    if(pos<=2)
    {
        string temp = rule[n];
        for(int i=0;i<temp.size();i++)
        {
            temp[i] = table[(temp[i]-48) + pos*2];
        }
        ans = temp;
    }
    else
    {
        int count = pow(10,pos-3) * n;
        for(int i=0;i<count;i++)
        {
            ans+=table[6];
        }
    }
    return ans;
}
int main()
{
    string n;
    cin >> n;
    string ans;

    
    for(int i=0;i<n.size();i++)
    {
        int now = n[i]-48;
        ans += RomanNum(now,n.size()-i-1);

    }

    cout << ans;
    
}