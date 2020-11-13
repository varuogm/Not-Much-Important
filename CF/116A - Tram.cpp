#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	
ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	ll t;
	cin>>t;
	ll tot=0,MAX=0;
	while(t--)
	{
		ll in=0,out=0;
		cin>>out>>in;
		tot+=(in-out);
		MAX= max(MAX,tot);
	}
  cout<<MAX;


return 0;
}

