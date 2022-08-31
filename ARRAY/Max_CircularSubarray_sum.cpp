#include <iostream>

using namespace std;

int max_sum(int a[], int n)
{
    int res = a[0];
    int maxEnd = a[0];
    for (int i = 1; i < n; ++i)
    {
        maxEnd = max(maxEnd + a[i], a[i]);
        res = max(res, maxEnd);
    }
    return res;
}

int max_Cir(int a[], int n)
{
    //Normal Sum
    int max_Normal = max_sum(a, n);
    if (max_Normal < 0)
        return -1;

    //circular Sum
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum + a[i];
        a[i] = -a[i];
    }
    return max(max_sum(a, n) + arrSum, max_Normal);
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
    cout<<"Max : "<<max_Cir(a,n);
    return 0;
}