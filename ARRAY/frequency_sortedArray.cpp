#include <iostream>

using namespace std;

void freq(int a[], int n)
{
    int freq = 1;
    int i = 1;
    while (i < n)
    {
        while (i < n && a[i] == a[i - 1])
        {
            freq++;
            i++;
        }
        cout << a[i - 1] << ' ' << freq << endl;
        freq = 1;
        ++i;
    }
    if (n == 1 || i <= n)
        cout << a[i - 1] << ' ' << '1' << endl;
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
    freq(a, n);

    return 0;
}