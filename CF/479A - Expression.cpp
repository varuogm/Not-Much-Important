#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{   ll a,b,c;
	cin>>a>>b>>c;
    ll MAX=max((a+b)*c,(b+c)*a);
cout<<max(a*b*c,max(a+b+c,max((a*b)+c,max((b*c)+a,MAX))));
return 0;
}

