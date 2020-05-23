#include<bits/stdc++.h>
#define f(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    short t;
    cin>>t;
    while(t--)
    {
        short i,n,t,val,f=1;
    bitset<100> b;
    cin>>n;
    f(i,n)
    {
        cin>>val;
        if(val)
        b[i]=1;
    }
    val=b._Find_first();
    while(true)
    {
        short next=b._Find_next(val);
        if(next==100)break;

        if(next-val<6){f=0;break;}
        else
            val=next;
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
