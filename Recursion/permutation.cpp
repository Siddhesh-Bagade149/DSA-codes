#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void perm(string str, string op)
{
    // bc
    if (str.length() == 0)
    {
        cout << op << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char curr = str[i];
        str = str.substr(0, i) + curr + str.substr(i + 1, str.length());
        perm(str, op + curr);
    }
    // cout<<"function end line\n";
}
int main()
{
    string str = "abc";
    perm(str, "");
    return 0;
}