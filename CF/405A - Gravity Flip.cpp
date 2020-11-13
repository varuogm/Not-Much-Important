#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(ll i=0;i<n;i++)
		cout<<arr[i]<<" ";
return 0;
}

