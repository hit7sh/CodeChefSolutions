// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
	int n, a;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> a;
		cout << ((a^2)==0?1:(a^2)) << ' ';
	}
}

signed main() {

    __speed() solve();
    return 0;
}
