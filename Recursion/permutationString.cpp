#include <bits/stdc++.h>

using namespace std;

void solve(string s, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        ans.push_back(s);
        return;
    }

    for (int i = index; i < s.length(); ++i)
    {
        swap(s[index], s[i]);
        solve(s, index + 1, ans);
        swap(s[index], s[i]);
    }
}

vector<string> permutation(string s)
{
    vector<string> ans;
    int index = 0;
    solve(s, index, ans);

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    cin >> s;

    vector<string> ans = permutation(s);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}