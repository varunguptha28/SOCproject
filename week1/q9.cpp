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

int find(const string s, int k) {
    int n = s.length();
    int result = 0;

    for (int i = 0; i < n; ++i) {
        unordered_map<char, int> charCount;
        int distinctCount = 0;

        for (int j = i; j < n; ++j) {
            if (charCount[s[j]] == 0) {
                distinctCount++;
            }
            charCount[s[j]]++;

            if (distinctCount == k) {
                result++;
            } else if (distinctCount > k) {
                break;
            }
        }
    }

    return result;
}

void solve(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        unordered_map<char, int> charCount;
        int distinctCount = 0;

        for (int j = i; j < n; ++j) {
            if (charCount[s[j]] == 0) {
                distinctCount++;
            }
            charCount[s[j]]++;

            if (distinctCount == k) {
                ans++;
            } else if (distinctCount > k) {
                break;
            }
        }
    }
    cout << ans << "\n";
    
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