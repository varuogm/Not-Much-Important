#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	ll arr[n],sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
     if(sum==0)
     cout<<"EASY";
     else
      cout<<"HARD";
return 0;
}

