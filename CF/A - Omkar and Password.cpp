#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// if there is at least two unique elements then yes it can be converted into single digit but 
//if there is no two unique elemensts then the array will not be converted 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		sort(arr,arr+n);//unique hoga the first last differtn hoga
		if(arr[0]!=arr[n-1])
		 cout<<"1";
		 else
		 cout<<n;
	}
return 0;
}-----/////////////

