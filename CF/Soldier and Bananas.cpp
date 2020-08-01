#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll k,n,w;
	cin>>k>>n>>w;
	ll sum=0;
	for(ll i=1;i<=w;i++)
	{
		sum+= (k*i);
	}
	
	if(sum<=n)
	 cout<<"0";
	else
	 cout<<sum-n;

return 0;
}

