#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int t;unsigned short l,r,k;cin>>t;
	while(t--)
    {
        cin>>l>>r>>k;
        if(l!=r)cout<<k<<endl;
        else cout<<"1\n";
    }
	return 0;
}
