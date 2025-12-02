#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int q = 0;
        for (char c : s) {
            if (c == 'Q') {
                ++q;
            } else if (q > 0) {
                --q;
            }
        }

        cout << (q == 0 ? "Yes" : "No") << endl;
    }
}
