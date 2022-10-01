#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a, int index, vector<vector<int>> &ans)
{
    if (index >= a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = index; i < a.size(); ++i)
    {
        swap(a[index], a[i]);
        solve(a, index + 1, ans);
        swap(a[index], a[i]);
    }
}

vector<vector<int>> permutation(vector<int> &a)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(a, index, ans);
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<vector<int>> b = permutation(a);

    for (const auto &y : b)
    {

        for (const auto &x : y)
        {
            cout << x << ' ';
        }
        cout << endl;
    }

    return 0;
}