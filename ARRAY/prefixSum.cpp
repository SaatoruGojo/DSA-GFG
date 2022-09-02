#include <iostream>

using namespace std;

int preFix(int a[], int n, int k)
{
    int preFix1[n];
    preFix1[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        preFix1[i] = preFix1[i - 1] + a[i];
    }
    return preFix1[k];
}

int getSum(int a[], int n, int l, int r)
{
    if (l != 0)
    {
        return preFix(a, n, r) - preFix(a, n, l - 1);
    }
    else
        return preFix(a, n, r);
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
    cout << getSum(a, n, 2, 4) << endl;
    cout << getSum(a, n, 1, 4) << endl;

    return 0;
}