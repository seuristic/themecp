#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

#define ll long long
#define size(x) (int)(x).size()
#define all(x) begin(x), end(x)

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> ds(n);
    for (auto& [d, s] : ds) {
        cin >> d >> s;
    }

    sort(all(ds));

    int result = 300;
    for (auto& [d, s] : ds) {
        result = min(result, d + (s - 1) / 2);
    }
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}