#include <iostream>

using namespace std;

int sum1(int n)
{
    if (n == 0)
        return 0;
    int x = n % 10;

    return (x + sum1(n / 10));
}

int main()
{
    int n;
    cin >> n;
    cout << sum1(n);

    return 0;
}