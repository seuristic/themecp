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

    vi freq(26);
    for (char c : s) {
        ++freq[c - 'a'];
    }

    pair<pair<int, char>, int> low, high;
    low = high = {{freq[s[0] - 'a'], s[0]}, 0};

    for (int i = 1; i < n; ++i) {
        low = min(low, {{freq[s[i] - 'a'], s[i]}, i});
        high = max(high, {{freq[s[i] - 'a'], s[i]}, i});
    }

    s[low.second] = s[high.second];

    cout << s << endl;
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
