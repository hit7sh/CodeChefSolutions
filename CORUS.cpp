#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,q,c,ans;
    cin>>t;
    while(t--){
        string st;
        cin>>n>>q>>st;
        int freq[26+1]={0};
        
        for(auto x:st)
            freq[x^96]++;
            
        while(q--){
            ans=0;
            cin>>c;
            for(i=1;i<=26;i++)
                if(freq[i]>c)
                    ans+=freq[i]-c;
            cout<<ans<<endl;
        }
    }
    return 0;
}
