#include<iostream>
#include<stdlib.h>

using namespace std;

void rev1(string s)
{
    string s1 = "";
    int l = s.length();
    for (int i = l-1; i >= 0; i--)
    {
        s1 = s1 + s[i];
    }
    cout<<s1;

}

int main()
    {
        string s;
        cin>>s;
        rev1(s);
        return 0;
    }