#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "X" << endl;
    }

    else if (n % 2 != 0)
    {
        int mid = n / 2;

        for (int i = 0; i < mid; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    cout << "\\";
                else if (j == n - i - 1)
                    cout << "/";
                else
                    cout << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            if (i == mid)
                cout << "X";
            else
                cout << " ";
        }
        cout << endl;

        for (int i = mid - 1; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    cout << "/";
                else if (j == n - i - 1)
                    cout << "\\";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
