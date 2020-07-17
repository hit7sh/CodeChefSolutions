// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < int(n); i++)
#define f1(i, n) for(i = 1; i<= int(n); i++)
#define all(x) x.begin(), x.end()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define endl "\n"

using namespace std;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 1e5+5;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}
ll mod_pow(ll x, ll y){ll res = 1;x = x % mod;while(y>0){if(y&1)res = (res*x) % mod; y = y>>1;x = (x*x) % mod; }return res; }ll mod_inv ( ll n ){ll ans = mod_pow ( n , mod - 2 ) ;return ans ;}ll mul(ll a, ll b){a%=mod, b%=mod;return (a*b)%mod;}ll sub(ll a,ll b){a%=mod, b%=mod;return (a-b+mod)%mod;}ll add(ll a, ll b){a%=mod, b%=mod;return (a+b)%mod;}

//B
ll A[mxN], T[mxN];
void solve(){
	ll n, used, i, k, ans = 0;
	cin >> n >> k;
	f0(i, n)
		cin >> A[i];
	sort(A, A+n);
	f0(i, n)
		T[i]=A[i];

	ll ci = 0, cmin = A[ci];
	while(A[n-1]){
		while(cmin <=k){
			if(2*cmin < k){
			ci ++;
			if(ci==n)
				break;
			cmin = A[ci];
			continue;
			}
			ans ++;
			k = 2*cmin;
			A[ci] = 0;
		A[n-1] = min(T[n-1], 2*A[n-1]);
			ci ++;
			if(ci == n)
				break;
			cmin = A[ci];
		}
		if(A[n-1]==0)
			break;
		ans ++;
		used = A[n-1]>=k?k:A[n-1];
		A[n-1] -=used;
		A[n-1] = min(T[n-1], 2*A[n-1]);
		k = 2*used;
	}
	f0(i, n)
		ans+=A[i]!=0;
	print(ans);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    __speed();
    tt solve();
    return 0;
}
