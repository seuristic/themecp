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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_one = 0;
    bool is_adj = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            if (!is_adj && i > 0 && s[i - 1] == s[i]) {
                is_adj = true;
            }
            ++count_one;
        }
    }
    if (count_one % 2 == 0 && (count_one > 2 || !is_adj)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
