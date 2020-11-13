#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	double sum=0;
   for(ll i=0;i<n;i++)
	  {
	  	cin>>arr[i];
	  	sum+=arr[i];
	  }
	cout<<fixed<<setprecision(12)<<sum/float(n);
return 0;
}

