// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)
#define all(x) x.begin(), x.end()
#define EB emplace_back
#define PB push_back
#define endl "\n"
#define S second
#define F first

using namespace std;

template<typename... Args>void print(Args... args){((cout << args << " "), ...); cout << endl;}

void solve(){//B
	string s;
	int i;
	cin >> s;
	int f[27]={};
	for(char x:s)
		f[x^96]++;
	int fr1=0, fr2=0;
	f1(i, 26)
		fr1+=f[i]&1, fr2+=f[i]/2;
	int ans = min(fr1, fr2);
	fr1-=ans;
	fr2-=ans;
	ans += (fr2*2)/3;
	print(ans);
	
}

signed main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    __speed() tt solve();
    return 0;
}
