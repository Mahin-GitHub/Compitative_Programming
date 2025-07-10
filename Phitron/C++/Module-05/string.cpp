#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "world";
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    if (s1 == s2)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
    cout << s1 << endl;
    return 0;
}