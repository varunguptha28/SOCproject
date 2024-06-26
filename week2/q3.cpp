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

int find(const std::vector<int>& A, int target){
    int low = 0;
    int high = A.size() - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] <= target) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

void solve(){
    int n;
    cin >> n;
    vector<int>A(n);
    vi dum(n);
    fu(i,0,n){
        cin >> A[i];
        dum[i] = A[i];
    }
    sort(sor(A));
    unordered_map<int,int>x;
    x[A[0]] = 0;
    vi prefix(n);
    prefix[0] = A[0];
    fu(i,1,n){
        prefix[i] = prefix[i-1]+A[i];
    }
    x[A[n-1]] = n-1;
    for(int i = n-2;i>=0;i--){
        if(prefix[i] >= A[i+1]){
            x[A[i]] = x[A[i+1]];
        }
        else{
            x[A[i]] = i;
        }
    }
    fu(i,0,n){
        cout << x[dum[i]] << " ";
    }
    cout << "\n";
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