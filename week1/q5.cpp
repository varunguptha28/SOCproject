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
    vector<int>B(n);
    fu(i,0,n){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(sor(A));
    int left = 0,right = n-1;
    bool check = true;
    int a,b;
    for(int i = 0;(i < n) && (i < right);i++){
        if(A[i]+A[right] == k){
            // cout << i << " " << right << "\n";
            a = A[i];b = A[right];
            check = false;
            break;
        }
        while(A[i]+A[right] > k){
            right--;
        }
        if(A[i]+A[right] == k){
            // cout << i << " " << right << "\n";
            a = A[i];b = A[right];
            check = false;
            break;
        }

    }
    if(check){
        cout << "-1" << " -1"<< "\n";
        return;
    }
    int i_1,i_2;
    for(int i = 0;i <n;i++){
        if(B[i] == a){
            i_1 = i;
        }
        if(B[i] == b){
            i_2 = i;
        }
    }
    if(i_1 > i_2){
        swap(i_1,i_2);
    }
    cout << i_1 << " "<< i_2 << "\n";
    
    
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