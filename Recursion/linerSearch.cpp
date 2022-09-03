#include <iostream>

using namespace std;

bool search(int a[], int n, int k)
{
    if (n == 0)
        return false;
    if (a[0] == k)
        return true;
    return search(a + 1, n - 1, k);
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