#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
     ll arr[n];
     for(ll i=0;i<n;i++)
     {
     	cin>>arr[i];
	 }
	 ll even=0,E,O,odd=0;
	 for(ll i=0;i<n;i++)
     {
     	if(arr[i]%2==0)
     	{
     	  even++;
		   E=i; 
		 }
		 else{
     	  odd++;
		   O=i; 
		 }	 
	 }
	 if(even<odd)
	   cout<<E+1;
	 else
	  cout<<O+1;
return 0;
}

