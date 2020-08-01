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
	ll p=t%5;
	ll q=t/5;
	if(p==0)
	 cout<<q;
	else
	cout<<q+1;

return 0;
}

