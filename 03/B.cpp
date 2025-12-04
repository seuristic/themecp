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
    int n, k, x;
    cin >> n >> k >> x;
    if (x == 1) {
        if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> result;
            if (n % 2 == 1) {
                n -= 3;
                result.push_back(3);
            }
            int q = n / 2;
            while (q--) result.push_back(2);
            cout << size(result) << endl;
            for (int& x : result) {
                cout << x << ' ';
            }
            cout << endl;
        }
    } else {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            cout << 1 << ' ';
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}