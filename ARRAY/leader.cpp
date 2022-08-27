#include <bits/stdc++.h>

using namespace std;

void leader(int a[], int n)
{
    for(int i=0;i<n;++i)
    { int max=a[i];
        int flag=1;
        for(int j=i;j<n;++j)
        {
            if(a[j]>=max)
            {   flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<a[i]<<' ';
    }
}

//Approch 2 with O(n)and O(n)Aux space

vector<int> leader2(int a[], int n)
{
    int cur = a[n-1];
    vector<int> b;
    b.push_back(cur);
    for (int i = n-2; i >=0; i--)
    {
        if(a[i]>cur)
        {
            cur=a[i];
            b.push_back(cur);
        }
    }
    reverse(b.begin(),b.end());
    return b;

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    leader(a, n);

    return 0;
}