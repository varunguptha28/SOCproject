#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fu(i, a, b) for (int i(a); i < b; i++)
#define pb push_back
#define pll pair<int, int>
#define sor(v) v.begin(), v.end()
#define vvi vector<vector<int>>
#define vi vector<int>
#define mset(v) memset(v, 0, sizeof(v))

#define varunguptha // Comment this later
#ifdef varunguptha
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

template <class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

int MOD = 1000000007;
const int inf = 1e17;
const int maxn = 100005;

void solve() {
    int n, m;
    cin >> n >> m;
    vvi A(n, vector<int>(m));
    vvi B(n, vector<int>(m));
    vvi A1(m, vector<int>(n));
    vvi B1(m, vector<int>(n));
    
    fu(i, 0, n) {
        fu(j, 0, m) {
            cin >> A[i][j];
        }
    }

    fu(i, 0, n) {
        fu(j, 0, m) {
            cin >> B[i][j];
        }
    }
    fu(i, 0, m) {
        fu(j, 0, n) {
            A1[i][j] = A[j][i];
        }
    }
    fu(i, 0, m) {
        fu(j, 0, n) {
            B1[i][j] = B[j][i];
        }
    }
    fu(i, 0, n) {
        sort(sor(A[i]));
        sort(sor(B[i]));
    }
    fu(i, 0, m) {
        sort(sor(A1[i]));
        sort(sor(B1[i]));
    }
    sort(sor(A));
    sort(sor(B));
    sort(sor(A1));
    sort(sor(B1));
    if (A == B) {
        if(A1 == B1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
        solve();
    
    return 0;
}