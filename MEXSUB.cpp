// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>
 
#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define dbg(x) cout << "(" << __LINE__ << ": "<< #x << " = " << x << ")\n"
 
#define Yes(x) puts((x) ? "YES" : "NO")
#define tt 	int t; for (cin >> t; t--; )
 
#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i <=(int)(n); i++)
 
#define all(x) x.begin(), x.end()

// #define endl "\n"
#define S second
#define F first

using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;
 
using ll = int64_t;
using vi = vector<int>;

using vl = vector<ll>;
 
const pair<int, int> DD[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
const int mod = 1e9 + 7, mxN = 1000, INF = 0x3f3f3f3f;

template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }

template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }


ll mod_pow(ll x, ll y){ll res=1;x%=mod;for(;y>0; y>>=1, x=(x*x)%mod)if(y&1) res=(res*x) % mod; return res; }ll mod_inv ( ll n ){ll ans = mod_pow ( n , mod - 2 ); return ans ;}inline ll mul(ll a, ll b){a%=mod, b%=mod;return (a*b)%mod;}ll sub(ll a,ll b){a%=mod, b%=mod;return (a-b+mod)%mod;}inline ll add(ll a, ll b){a%=mod, b%=mod; return (a+b)%mod;}


void solve() {
	int n, i;
	cin >> n;
	vi A(n);
	cin >> A;
	vl dp(n + 1);
	int mex = 0;
	set<int> s(A.begin(), A.end());
	for (auto it = s.begin(); it != s.end(); it++) {
		int x = *it;
		if (x != mex) break;
		else mex++;
	}
	if (mex == 0) { print(mod_pow(2, n - 1)); return; }

	set<pii> idx; // {value, index}
	vi prev(n), nxt(n);
	f0(i, mex) prev[i] = INF, idx.insert({INF, i}); 

	for (i = n - 1; i >= 0; i--) {
		if (A[i] < mex) {
			idx.erase({prev[A[i]], A[i]});
			idx.insert({i, A[i]});
			prev[A[i]] = i;
		}
		int till = idx.rbegin()->F;
		if (till == INF)
			nxt[i] = -1;
		else nxt[i] = till;
	}
	
	vl suf(n);
	ll sum = 0;
	for (i = n - 1; i >= 0; i--) {
		if (nxt[i] != -1) {
			int till = nxt[i];
			dp[i] = 1 + (till < n - 1 ? suf[till + 1] : 0);
			dp[i] %= mod;
		}
		sum = (sum + dp[i]) % mod;
		suf[i] = sum;	
	}
	print(dp[0]);
}	 




signed main() { 
	cout << fixed << setprecision(12);

	__speed() tt solve();
	 // int t, i; for (cin >> t, i = 1; i <= t; i++) cout << "Case #" << i << ": ", solve();
}
