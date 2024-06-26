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
    cin >> n >> k;
    vector<int>A(n);
    fu(i,0,n){
        cin >> A[i];
    }
    int left = 0,right = n-1;
    for(int i = 0;i < n;i++){
        if(A[i]+A[right] == k){
            cout << i+1 << " " << right+1 << "\n";
            return;
        }
        while(A[i]+A[right] > k){
            right--;
        }
        if(A[i]+A[right] == k){
            cout << i+1 << " " << right+1 << "\n";
            return;
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