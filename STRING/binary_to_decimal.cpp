#include<iostream>

using namespace std;

int binToDec(string s)
{
    int l = s.length();
    int base = 1;
    int ans = 0;
    for(int i = l-1;i>=0;--i)
    {
    ans = ans + ( (int)(s[i]-'0')*base );
    base = base * 2;
    }
    return ans;
}

int main()
    {
        string s;
        cin>>s;
        int x = binToDec(s);
        cout<<x;
        return 0;
    }