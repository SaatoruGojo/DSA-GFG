#include<iostream>

using namespace std;

void check_palin(string s)
{
    int l = s.length();
    int start = 0;
    int end = l-1;
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
            cout<<"No";
            return;
        }
        else
        {
            start++;
            end--;
        }
    }
    cout<<"Yes";
}

int main()
    {
        string s;
        cin>>s;
        check_palin(s);
        return 0;
    }