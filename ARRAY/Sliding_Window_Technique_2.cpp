#include <iostream>

using namespace std;

bool check(int a[], int n, int sum)
{
    int s = 0;
    int curr_Sum = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (curr_Sum > sum && s < i - 1)
        {
            curr_Sum = curr_Sum - a[s];
            s++;
        }
        if (curr_Sum == sum)
            return true;
        if (i < n)
            curr_Sum = curr_Sum + a[i];
    }
    if (curr_Sum == sum)
        return true;
    else
        return false;
}
int main()
{

    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << "Chek" << check(a, n, sum);
    return 0;
}