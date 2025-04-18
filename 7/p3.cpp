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
    vl a(n);
    for (ll &x : a) {
        cin >> x;
    }

    int i = 0, j = 1;
    ll result = 0;
    while (i < n && j < n - 1) {
        while (i < n && a[i] == 0) ++i, ++j;
        while (j < n - 1 && a[j] > 0) ++j;
        if (i < n - 1) {
            --a[i];
            ++a[j];
            ++result;
        }
    }

    if (j == n - 1) {
        while (i < n - 1) {
            result += a[i];
            ++i;
        }
    }

    cout << result << endl;
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
