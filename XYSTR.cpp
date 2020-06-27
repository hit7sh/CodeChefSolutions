// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"

using namespace std;

template<typename... Args>
void println(Args... args){
    ((cout << args << " "), ...);
    cout << endl;
}

void solve(){
	string st;
	cin >> st;
	int f[2]={0}, ans=0;
	int l = st.length();
	for(int i=0;i<l-1;i++){
		if(st[i]-st[i+1])
			ans++,i++;
	}
	println(ans);
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
