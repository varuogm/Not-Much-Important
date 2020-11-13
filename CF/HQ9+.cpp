#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string  t;
	cin>>t;
	ll flag=0;
    for(ll i=0;i<t.length();i++)
     {
     	if(t[i]=='H' ||  t[i]=='Q' || t[i]=='9' )
     	  flag=1;	
	 }
	if(flag==1)
	   cout<<"YES";
	else
	  cout<<"NO";
return 0;
}

