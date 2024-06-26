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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count  = 0;
    for(int i = 1;i<n;i++){
        count = 0;
        if(n%i == 0){
            for(int j = 0;j < n;j++){
                if(s[j] != s[j%i]){
                    count++;
                }
                if(count >=2){
                    break;
                }
            }
            if(count <=1){
                cout << i << "\n";
                return;
            }
            count = 0;
            for(int j = 0;j < n;j++){
                if(s[j] != s[j%i+i]){
                    count++;
                }
                if(count >=2){
                    break;
                }
            }
            if(count <=1){
                cout << i << "\n";
                return;
            }

        }

    }
    cout << n << "\n";
    
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