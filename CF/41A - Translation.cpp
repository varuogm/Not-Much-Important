#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string a,b;
    cin>>a>>b;
    ll  k=a.length(),flag=0;
    for(int i=0;i< k;i++)
    {
    	if(a[i]!=b[k-i-1])
    	{
    	  flag=1;	//cout<<a[i]<<" "<<b[k-i-1];
		}
		 
	 }
	 if(flag==0)
	    cout<<"YES\n";
	else
		cout<<"NO\n";
return 0;
}

