#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;

#define endl '\n'
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    string s;
    cin >> s;
    vi a(10, 0);
    for (char c : s) {
        a[c - '0']++;
    }

    for (int i = 0; i < 10; ++i) {
        if (a[i] == 0) continue;
        if (a[i] == 4) {
            cout << -1 << endl;
            return;
        } else if (a[i] == 3) {
            cout << 6 << endl;
            return;
        }
    }

    cout << 4 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
