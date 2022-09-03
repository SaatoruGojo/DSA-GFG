#include <iostream>

using namespace std;
bool search(string str, int e, int s = 0)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    return search(str, s++, e--);
}

int main()
{
    string n;
    cin >> n;
    int s = n.size() - 1;

    cout << search(n, s);

    return 0;
}