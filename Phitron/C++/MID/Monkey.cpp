#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int len = strlen(s);
        sort(s, s + len);
        for (int i = 0; s[i] != '\0'; i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || s[i] == ' ')
            {
                if (s[i] == ' ')
                {
                }
                else
                {

                    cout << s[i];
                }
            }
        }
        cout << endl;
    }

    return 0;
}