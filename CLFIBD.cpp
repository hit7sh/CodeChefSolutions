#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
        cin >> s;
        int a[26]={0};
        for(int i=0;i<s.length();i++)
            a[s[i]-'a']++;
        
        vector<int> v;
	    for(int i=0;i<26;i++)
	    {
	        if(a[i]>0)
	            v.push_back(a[i]);
	    }
	    if(v.size()<3)
	        cout<<"Dynamic"<<endl;
	    else
	    {
	        int i;
	        for(i=2;i<v.size();i++)
	        {
	            if(v[i]!=v[i-1]+v[i-2] && v[i-1]!=v[i]+v[i-2] && v[i-2]!=v[i]+v[i-1])
	            {
	                cout<<"Not"<<endl;
	                break;
	            }
	        }
	        if(i==v.size())
	        {
	            cout<<"Dynamic"<<endl;
	        }
	    }
    }
	return 0;
}
