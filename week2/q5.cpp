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

// const int MOD = 998244353;
int MOD = 1000000007;
const int inf = 1e17;
const int maxn = 100005;

void solve(){
    int n,k;
    cin >> n >>k;
    vector<int>A(n);
    map<int,int>x;
    map<int,int>y;
    fu(i,0,n){
        cin >> A[i];
        if(x.find(A[i]) == x.end()){
            x[A[i]] = i;
            y[A[i]] = i;
        }
        else{
            y[A[i]] = i;
        }
    }
    int a,b;
    fu(i,0,k){
        cin >>a >> b;
        if(x.find(a) == x.end() || x.find(b) == x.end()){
            cout << "NO\n";
            continue;
        }
        else{
            if(x[a] < y[b]){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }

    
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
        solve();
}