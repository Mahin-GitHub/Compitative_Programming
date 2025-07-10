#include <bits/stdc++.h>

using namespace std;

void digit(int n)
{
    if (n == 0)
    {
        return;
    }
    digit(n / 10);

    int lastNumber = n % 10;
    cout << lastNumber << " ";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0;
        }
        else{

            digit(n);
        }

        cout << endl;
    }

    return 0;
}