#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
using ll = long long;

#define endl '\n'
#define sz(x) (int)(x).size()

template <typename T>
using indexed_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int sq = sqrt(n);

  if (sq * sq == n) {
    int count1 = 0;
    for (char c : s) {
      if (c == '1') {
        ++count1;
      }
    }
    if (count1 == 4 * (sq - 1)) {
      cout << "Yes" << endl;
      return;
    }
  }

  cout << "No" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 1;
  cin >> tc;

  while (tc--) {
    solve();
  }

  return 0;
}
