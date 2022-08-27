#include <iostream>

using namespace std;

void MaxDiff(int a[], int n)
{
    int res = a[1] - a[0];
    int minVal = a[0];
    for (int i = 1; i < n; ++i)
    {
        res = max(res, a[i] - minVal);
        minVal = min(minVal, a[i]);
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
    MaxDiff(a, n);

    return 0;
}