// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define tt int t;for(cin>>t; t--; )
#define endl "\n"

using namespace std;
using ll = long long;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

void solve(){
	ll s, n, ans = 0;
	cin >> s >> n;
	ans = s/n;
	ll x=s%n;
	if(x){
	if(x<=2)
		ans++;
	else
		ans += 1+(x&1);
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
