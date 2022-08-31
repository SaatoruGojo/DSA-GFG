#include <bits/stdc++.h>

using namespace std;

int majorityEle(int a[], int n)
{
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[res] == a[i])
        {
            ++count;
        }
        else
        {
            --count;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[res] == a[i])
            ++count;
    }
    if (count <= n / 2)
        res = -1;

    return res;
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
    cout << "Majority Element : " << a[majorityEle(a, n)];

    return 0;
}