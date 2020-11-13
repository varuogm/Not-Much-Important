#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n,m,x;
cin>>n>>m;
ll sum=0;
for(ll i=1;i<=n;i++)
{
cin>>x;
sum+=x;
}
if(sum==m)
	cout<<"YES"<<endl;
else 
	cout<<"NO"<<endl;
}
return 0;
}
