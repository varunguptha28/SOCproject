#include <bits/stdc++.h>


using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

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

int MOD = 998244353;
// int MOD = 1000000007;
const int inf = 1e17;
const int maxn = 200005;
vi po(maxn);

void solve(){
    int n;
    cin >> n;
    vector<int>A(n);
    fu(i,0,n){
        cin >> A[i];
    }
    vi prefix(n);
    prefix[0] = A[0];
    fu(i,1,n){
        prefix[i] = prefix[i-1]+A[i];
    }
    int mx = *min_element(sor(prefix));
    if(mx>=0){
        cout << po[n]<<"\n";
        return;
    }
    int count = 0;
    int ans = 0;
    fu(i,0,n){
        if(prefix[i] == mx){
            ans=(ans+po[count+n-1-i])%MOD;
        }
        if(prefix[i]>=0){
            count++;
        }
    }
    cout << ans << "\n";
    
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    po[0] = 1;
    fu(i,1,maxn){
        po[i] = (po[i-1]*2)%MOD;
    }
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
        solve();
}