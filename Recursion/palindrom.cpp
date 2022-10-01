#include <iostream>

using namespace std;
bool search(string str, int s, int e)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    return search(str, e--, s + 1);
}

int main()
{
    string str;
    cin >> str;
    int n = str.size() - 1;

    cout << search(str, 0, n);

    return 0;
}