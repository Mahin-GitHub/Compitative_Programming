#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (i == 2)
        {
            cout << 2 << " ";
        }
        else
        {
            bool isPrime = true;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
            if (isPrime == true)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}