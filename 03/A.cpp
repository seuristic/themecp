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
    int n, f, k;
    cin >> n >> f >> k;
    --f, --k;
    vector<int> a(n);
    for (int& x : a) {
        cin >> x;
    }

    int value = a[f];
    sort(all(a), greater<int>());

    if (a[k] < value) {
        cout << "YES" << endl;
    } else if (a[k] > value) {
        cout << "NO" << endl;
    } else if (k == n - 1 || a[k + 1] < value) {
        cout << "YES" << endl;
    } else {
        cout << "MAYBE" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}