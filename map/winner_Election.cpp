#include <bits/stdc++.h>

using namespace std;

void solve(string a[], int n)
{
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    int freq = 0;
    string curr;
    for (auto x : m)
    {
        if (x.second > freq)
        {
            freq = x.second;
            curr = x.first;
        }
        else if (x.second == freq && x.first < curr)
        {
            curr = x.first;
        }
    }
    cout << curr << ' ' << freq;
}

int main()
{
    system("CLS");
    string a[] = {
        "ABC",
        "EFG",
        "ABC",
        "EFG",
        "XYZ",
    };
    solve(a, 5);

    return 0;
}