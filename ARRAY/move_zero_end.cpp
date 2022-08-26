#include <iostream>

using namespace std;

void rem_zero(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[count]);
            ++count;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rem_zero(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}