#include <iostream>

using namespace std;

bool equiPoint(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = sum + a[i];
    }
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (leftSum == sum - a[i])
            return true;
        leftSum = leftSum + a[i];
        sum = sum - a[i];
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << equiPoint(a, n);
    return 0;
}