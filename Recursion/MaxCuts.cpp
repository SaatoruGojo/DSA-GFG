#include <bits/stdc++.h>

using namespace std;

int cut1(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max({cut1(n - a, a, b, c), cut1(n - b, a, b, c), cut1(n - c, a, b, c)});
    if (res == -1)
        return -1;
    return (res + 1);
}

int main()
{
    int a, b, c, n;
    cin >> n >> a >> b >> c;
    cout << cut1(n, a, b, c);

    return 0;
}