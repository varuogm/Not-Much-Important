#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
       ll n;
       cin>>n;
       ll arr[n];
       for(ll i=0;i<n;i++)
         cin>>arr[i];
         
         for(ll i=0;i<n-2;i++)
         {
		  if( (i!= (i+1)) && ((i+1)!= (i+2)))
		   {
		   	cout<<i+1<<" "<<i+2<<" "<<i+3<<"\n";
		   	goto ok;
		   }
		 }
        cout<<"-1\n";
        ok: 
        {
		}
	}
return 0;
}

