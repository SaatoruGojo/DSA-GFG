#include <bits/stdc++.h>

using namespace std;
void solve(int a[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        m[a[i]]++;
    }

    for (auto x : m)
    {
        cout << x.first << ' ' << x.second;
        cout << endl;
    }
}

int main()
{
    system("CLS");
    int a[] = {2, 3, 4, 5, 3, 6, 2, 2};
    solve(a, 8);
    return 0;
}