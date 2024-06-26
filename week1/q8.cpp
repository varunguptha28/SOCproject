#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    unordered_map<int, int> prefix;
    int current = 0;
    int ans = 0;
    prefix[0] = 1;
    for (int i = 0; i < n; ++i) {
        current ^= A[i];   
        int required = current ^ m;
        if (prefix.find(required) != prefix.end()) {
            ans += prefix[required];
        }
        prefix[current]++;
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_case;
    cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}
