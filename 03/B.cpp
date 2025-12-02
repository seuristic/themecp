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
    vector<int> a(n);
    bool foundZero = false;
    int countNeg = 0;
    for (int& x : a) {
        cin >> x;
        if (x == 0) {
            foundZero = true;
        }
        if (x < 0) {
            ++countNeg;
        }
    }

    if (foundZero || countNeg % 2 == 1) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
        cout << "1 0" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}