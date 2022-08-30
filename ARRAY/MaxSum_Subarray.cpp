#include <iostream>

using namespace std;

void MaxSum(int a[], int n)
{
    int res=a[0];
    int maxEnd=a[0];
    for (int i = 1; i < n; i++)
    {
        maxEnd = max(maxEnd + a[i], a[i]);
        res = max(maxEnd,res);
    }
    cout<<"Max :"<<res;
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
    MaxSum(a, n);
    return 0;
}