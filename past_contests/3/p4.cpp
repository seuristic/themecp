#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    string s = "codeforces";
    unordered_map<char, bool> um;
    for (char c : s) {
        um[c] = true;
    }

    while (tc--) {
        char ch;
        cin >> ch;
        cout << (um[ch] ? "YES" : "NO") << endl;
    }

    return 0;
}
