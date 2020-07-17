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
const int mod = 1e9+7,mxN = 1e6+5;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

//D
int A[mxN];
void solve(){
	ll n, i, ans=0;
	cin >> n;
	f0(i, n){
		cin >> A[i];
		if(i)
			ans += abs(A[i]-A[i-1])-1;
	}
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
