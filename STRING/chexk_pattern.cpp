#include<iostream>

using namespace std;

void checkPatt(string t, string p)
{
    int found = t.find(p);
    while(found != string::npos)
    {
        cout<<"Found At "<<found<<endl;
        found = t.find(p,found+1);
    }
}

int main()
    {
        string text;
        string patt;
        cin>>text>>patt;
        checkPatt(text,patt);
        return 0;
    }