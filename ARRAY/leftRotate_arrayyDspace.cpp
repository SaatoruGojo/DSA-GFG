#include <bits/stdc++.h>

using namespace std;

void reverse(int a[], int s, int e)
{
    while (s < e)
        swap(a[s++], a[e--]);
}

void leftR(int a[], int n, int k)
{
    k = k % n;
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);
    reverse(a, 0, n - 1);
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    leftR(a, n, k);
    for (int x : a)
        cout << x << ' ';

    return 0;
}