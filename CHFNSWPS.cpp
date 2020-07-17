// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define int long long
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
const int mod = 1e9+7,mxN = 2e6+5;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

//E
vi A(mxN), B(mxN);
void solve(){
	int n, i;
	mii m1, m2, m;
	cin >> n;
	
	f0(i, n)
		cin >> A[i], m[A[i]]++;
	f0(i, n)
		cin >> B[i], m[B[i]]++;
	int mn = (m.begin()->F);
	for(const auto& x:m)
		if(x.S & 1)
			i=0;
	if(!i || m.size()>n){
		print(-1);return;
	}
	if(m.size()==1){
		print(0);return;
	}

	int ans=0;
	for(const auto& x:m){
		m1[x.F] = x.S/2;
	}
	m2=m1;
	vi a, b;
	f0(i, n)
		if(m2[A[i]])
			m2[A[i]]--;
		else
			a.EB(A[i]);
	m2=m1;
	f0(i, n)
		if(m2[B[i]])
			m2[B[i]]--;
		else
			b.EB(B[i]);
	sort(all(a));sort(rall(b));
	f0(i, a.size())
		ans+=min({2*mn, a[i], b[i]});
	print(ans);
}

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    __speed();
    tt solve();
    return 0;
}
