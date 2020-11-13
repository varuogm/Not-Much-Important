#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll t;
	cin>>t;
	while(t--)
	{
       ll n;
       cin>>n;
       ll flag=0,arr[n];
       for(ll i=0;i<n;i++)
         cin>>arr[i];
         
        sort(arr,arr+n);
		
		for(ll i=0;i<n-1;i++)
         {
         	if( abs(arr[i+1]-arr[i]) >1)
         	  {
			    flag=1;
			    break ;
			   }
		 }
		if(flag==1)
		   cout<<"NO\n";
        else
		 cout<<"YES\n";            
	}
return 0;
}

