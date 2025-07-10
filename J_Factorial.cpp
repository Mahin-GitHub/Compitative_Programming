#include <bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int value = fact(n - 1);
    return n * value;
}

int main()
{
    int n;
    cin >> n;
    long long int result = fact(n);

    cout << result << endl;

    return 0;
}