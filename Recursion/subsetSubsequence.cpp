#include <bits/stdc++.h>

using namespace std;

void subset(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (nums.size() <= index)
    {
        ans.push_back(output);
        return;
    }

    subset(nums, output, index + 1, ans);

    int element = nums[index];
    output.push_back(element);
    subset(nums, output, index + 1, ans);
}

int main()
{
    vector<int> a;
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    subset(a, output, index, ans);

    cout << ans[0];
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i];
    // }

    return 0;
}