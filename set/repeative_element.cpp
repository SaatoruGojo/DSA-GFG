#include <bits/stdc++.h>

using namespace std;

void solve(int *a, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(a[i]) != s.end())
        {
            cout << a[i] << ' ';
            s.erase(s.find(a[i]));
        }
        else
            s.insert(a[i]);
    }
}
int main()
{
    system("CLS");
    int a[] = {2, 3, 4, 5, 3, 6, 2, 2};
    solve(a, 8);
    return 0;
}