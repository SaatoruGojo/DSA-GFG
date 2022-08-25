#include<iostream>

using namespace std;

string decTobin(int x)
{
    string s="";
    while(x>0)
    {
        int t = x % 2;
        s = s + to_string(t);
        x = x/2;
    }
    return s;
}

int main()
    {
        int x;
        cin>>x;
        cout<<decTobin(x);
        return 0;
    }