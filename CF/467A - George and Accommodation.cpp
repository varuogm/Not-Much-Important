#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	ll cnt=0;
	while(t--)
	{
         ll a,b;
         cin>>a>>b;
         if(b-a>=2)
          cnt++;
	}
	cout<<cnt;
return 0;
}

