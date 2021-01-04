// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)


using namespace std;
using ll = long long;
using vl = vector<ll>;
const ll mod = 1e9+7,mxN = 1e7;


vl prim;
	vector<bool>p((int)1e7, 1);
void sieve() {
	p[2]=1;
	for(int i = 2; i*i < mxN; i++) {
		if(p[i])
		for(int j=i*i;j<mxN;j+=i)
			p[j]=0;
	}
	prim.EB(1);
	for(int i = 2; i < mxN; i++) 
		if(p[i])
			prim.EB(i);

}

void solve() {
	ll i, n, m=0;
	cin >> n;
	f0(i, n) {
		cin >> m;
		cout << (prim[i]*n) << ' ';
	}
	
}	

signed main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		sieve();
    __speed() solve();
    return 0;
}
