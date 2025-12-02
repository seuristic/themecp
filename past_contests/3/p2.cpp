#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long p = 1;
        for (int x : a) {
            p *= x;
        }

        for (int i = 0; i < n - 1; ++i) {
            ++p;
        }

        cout << p * 2022 << endl;
    }
}
