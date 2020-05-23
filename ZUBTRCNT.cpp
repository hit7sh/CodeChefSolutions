#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int tt;cin>>tt;
    for(int i=1;i<=tt;i++)
    {
        cout<<"Case "<<i<<": ";
        int l,k; cin>>l>>k;
        l=l-k+1;
        if(l<=0) cout<<"0\n";
        else
        cout<<l*(l+1)/2<<endl;
    }
    return 0;
}
