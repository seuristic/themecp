#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result = "";
        int i = 0;
        while (i < n) {
            result += s[i];
            for (int j = i + 1; j < n; ++j) {
                if (s[j] == s[i]) {
                    i = j;
                    break;
                }
            }
            ++i;
        }

        cout << result << endl;
    }
}
