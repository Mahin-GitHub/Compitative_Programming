#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 5, 2, 5, 2, 5, 6, 7, 2};
    vector<int> v2;
    v2 = v;
    vector<int> v3 = {12, 13, 15};
    replace(v2.begin(), v2.end(), 2, 44);
    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}