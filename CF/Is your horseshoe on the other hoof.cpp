#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll arr[4];
	for(ll i=0;i<4;i++)
	  cin>>arr[i];
	sort(arr,arr+4);
	ll cnt=0;
	for(ll i=0;i<3;i++)
	  {
	  if(arr[i]==arr[i+1])
	    cnt++;
	  }
cout<<cnt;
return 0;
}

