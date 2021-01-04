// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t;for(cin>>t; t--; )


using namespace std;

const ll mod = 1e9+7,mxN = 1e6+5;

ll mod_pow(ll x, ll y){ll res=1;x%=mod;for(;y>0; y>>=1, x=(x*x)%mod)if(y&1) res=(res*x) % mod; return res; }ll mod_inv ( ll n ){ll ans = mod_pow ( n , mod - 2 ); return ans ;}inline ll mul(ll a, ll b){a%=mod, b%=mod;return (a*b)%mod;}ll sub(ll a,ll b){a%=mod, b%=mod;return (a-b+mod)%mod;}inline ll add(ll a, ll b){a%=mod, b%=mod; return (a+b)%mod;}

void solve() {//b
	ll n, m;
	cin >> n >> m;
	print(mod_pow(m, (n/2) *(n/2+1)));
	
}	

signed main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    __speed() tt solve();
    return 0;
}
