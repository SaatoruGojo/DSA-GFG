#include <iostream>
int count = 0;
using namespace std;

void fun(string s, string curr = "", int index = 0)
{

    if (index == s.length())
    {
        cout << curr << ' ';
        return;
    }

    fun(s, curr, index + 1);
    fun(s, curr + s[index], index + 1);
}
int main()
{
    string s;
    cin >> s;
    cout << s.length() << endl;
    cout << s.size() << endl;
    fun(s);

    return 0;
}