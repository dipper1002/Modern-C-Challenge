#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//그레이 코드 출력 프로그램 구현하기
//모든 5-비트 수의 일반적인 이진표현, 그레이 코드, 복호화된 그레이 코드값

string Reverse(string str)
{
    string str2 = "";
    for(int i=str.size();i>=0;i--)
    {
        str2+=str[i];
    }
    return str2;
}
string ToBinary(int a)
{
    string ans = "";
    while(a > 0)
    {
        ans += (a&1) + 48;
        a/=2;
    }
    return Reverse(ans);
}
int GrayToBinary(int gray)
{
    int binary = gray;

    while (gray >>= 1)
        binary ^= gray;

    return binary;
}
int BinaryToGray(int binary)
{
    int gray =  binary^(binary>>1);
    return gray;
}

int main()
{
    int a = 31;

    for(int i=0;i<a;i++)
    {
        int binary = i;
        int gray = BinaryToGray(binary);
        int back = GrayToBinary(gray);
        cout << i <<" - "<<ToBinary(binary)<<" - "<<ToBinary(gray) <<" - "<<ToBinary(back)<<"\n"; 
    }

}