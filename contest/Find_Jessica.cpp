#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss;
    ss << s;
    string word;
    bool Jessica = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            Jessica = true;
        }
    }

    if (Jessica == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}