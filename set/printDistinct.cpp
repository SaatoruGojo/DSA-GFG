#include <bits/stdc++.h>

using namespace std;

void solve(int *a, int n)
{
    set<int> s(a, a + n);
    // auto it = s.begin();
    // while (it != s.end())
    // {
    //     cout << *it << ' ';
    //     ++it;
    // }

    for (int x : s)
        cout << x << ' ';
}

int main()
{
    int a[] = {2, 3, 4, 5, 3, 6, 7, 2};
    solve(a, 8);

    return 0;
}