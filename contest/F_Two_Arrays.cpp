#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

    
        unordered_set<int> SA, SB;

        for (int i = 0; i < n; ++i) {
            int x = a[i], y = b[i];

            int keep_gain  = (!SA.count(x)) + (!SB.count(y));
            int swap_gain  = (!SA.count(y)) + (!SB.count(x));

          
            if (swap_gain > keep_gain || (swap_gain == keep_gain && a[i] < b[i])) {
                swap(a[i], b[i]);
                x = a[i];  y = b[i];
            }

            SA.insert(x);
            SB.insert(y);
        }

        cout << SA.size() + SB.size() << '\n';
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        for (int i = 0; i < n; ++i)
            cout << b[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
