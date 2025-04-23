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

bool isSameSign(int x, int y) {
    return (x > 0 && y > 0) || (x < 0 && y < 0);
}

void solve() {
    ii a, b, c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    int x = 0, y = 0;
    if (isSameSign(a.first - b.first, a.first - c.first)) {
        x = min(abs(a.first - b.first), abs(a.first - c.first));
    }
    if (isSameSign(a.second - b.second, a.second - c.second)) {
        y = min(abs(a.second - b.second), abs(a.second - c.second));
    }

    cout << (x + y + 1) << endl;
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
