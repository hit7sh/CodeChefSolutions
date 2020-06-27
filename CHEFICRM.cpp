// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < n; i++)
#define endl "\n"

using namespace std;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 1e5+5;

template<typename... Args>
void println(Args... args){
    ((cout << args << " "), ...);
    cout << endl;
}

void solve(){
	int n, i, num, A[10000], fail = 0;
	mii chef;
	cin >> n;
	f0(i, n)
		cin >> A[i];
	f0(i, n){
		if(A[i] == 5)
			chef[5]++;
		else if(A[i] == 10){
		    if(chef[A[i]-5])
		        chef[A[i]-5]--, chef[A[i]]++;
		    else 
		        fail = 1;
		}else{
		    if(chef[A[i]-5])
		        chef[A[i]-5]--, chef[A[i]]++;
		    else if(chef[5]>1)
		        chef[5]-=2, chef[A[i]]++;
		    else
		        fail =1;
		}
	}
	if(!fail)
		println("YES");
	else
		println("NO");
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
