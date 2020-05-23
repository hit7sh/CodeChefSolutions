#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int flag=1;
	    int A[n];
	    for(i=0;i<n;i++)
	    cin>>A[i];
	    
	    sort(A,A+n);
	    int x=n/4;
	    if(A[x*3-1]==A[x*3]||A[x*2-1]==A[x*2]||A[x*1-1]==A[x*1])
	    cout<<"-1\n";
	    else cout<< A[x]<<" "<<A[x*2]<<" "<<A[x*3]<<endl;
	}
	return 0;
}
