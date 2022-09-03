#include <iostream>

using namespace std;

bool search(int a[], int n, int k)
{
    int mid = n / 2;
    if (mid <= 0)
        return false;
    if (a[mid] == k)
        return true;
    else if (a[mid] < k)
    {
        search(a + (n / 2), n - (n / 2), k);
    }
    else
        search(a, n - (n / 2), k);
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
    cout << search(a, n, k);

    return 0;
}