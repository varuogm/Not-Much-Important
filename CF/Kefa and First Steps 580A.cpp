#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	ll arr[t];
	for(ll i=0;i<t;i++)
     {
     	cin>>arr[i];
	 }
	 ll cnt=0,MAX=0;
     for(ll i=0;i<t-1;i++)
     {
     	if(arr[i]<=arr[i+1])
     	 cnt++;
     	else
     	 cnt=0;//counter ko frise jiro kardo bc
     	MAX= max(MAX,cnt);
	 }
     cout<<MAX+1;
return 0;
}

