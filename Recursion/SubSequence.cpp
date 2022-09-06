#include <bits/stdc++.h>

using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }
    solve(str, output, index + 1, ans);

    char x = str[index];
    output.push_back(x);
    solve(str, output, index + 1, ans);
}

int main()
{
    string str = {"abc"};
    string output;
    vector<string> ans;
    int index = 0;
    solve(str, output, index, ans);
    sort(ans.begin(), ans.end());
    for (string s : ans)
    {
        for (char x : s)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}