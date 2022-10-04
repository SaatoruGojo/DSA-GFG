#include <bits/stdc++.h>

using namespace std;
void solve(int a[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        m[a[i]]++;
    }

    for (int i = 0; i < n; ++i)
    {
        if (m[a[i]] != -1)
        {
            cout << a[i] << ' ' << m[a[i]] << endl;
            m[a[i]] = -1;
        }
    }
}

int main()
{
    system("CLS");
    int a[] = {2, 3, 4, 5, 3, 6, 2, 2};
    solve(a, 8);
    return 0;
}