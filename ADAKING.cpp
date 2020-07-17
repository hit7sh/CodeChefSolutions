// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define tt int t;for(cin>>t; t--; )
#define f1(i, n) for(i = 1; i<= int(n); i++)
#define endl "\n"

using namespace std;
using ll = long long;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

char A[9][9];
void pb(){
	int i, j;
	f1(i, 8){
		f1(j, 8)
			cout << A[i][j];
		cout << endl;
	}
	cout << endl;
}
void solve(){
	ll k, i, j, ans=0, a=0, b=0;
	cin >> k; k=64-k+1;
	f1(i, 8)
		f1(j, 8)
			A[i][j] = '.';
	f1(i, 8){
		f1(j, 8)
			if(--k>0)
				A[i][j]='X';
	}
	A[8][8]='O';
	pb();
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
