#include <bits/stdc++.h>

using namespace std;

void find(int a[], int n)
{
    int res = 0;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            ++count;
        }
        else
        {
            res = max(res, count);
            count = 0;
        }
    }
    cout << res;
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
    find(a,n);

    return 0;
}