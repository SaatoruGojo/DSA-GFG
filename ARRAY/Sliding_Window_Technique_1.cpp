#include <iostream>

using namespace std;

void slid(int a[], int n, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; ++i)
    {
        curr_sum = curr_sum + a[i];
    }
    int max_sum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum = curr_sum + (a[i] - a[i - k]);
        max_sum = max(max_sum, curr_sum);
    }
    cout << max_sum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    slid(a, n, k);
    return 0;
}