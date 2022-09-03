#include <iostream>

using namespace std;

int sum1(int a[], int n)
{
    if (n == 0)
        return 0;
    return a[0] + sum1(a + 1, n - 1);
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
    cout << sum1(a, n);

    return 0;
}