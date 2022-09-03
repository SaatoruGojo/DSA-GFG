#include <iostream>

using namespace std;
void search(string &s, int n, int k = 0)
{
    if (k >= n)
        return;

    swap(s[k], s[n - 1]);
    return search(s, n - 1, k + 1);
}

int main()
{
    string n;
    cin >> n;
    int s = n.size();
    search(n, s);
    cout << n;

    return 0;
}