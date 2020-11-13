#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	string str;
	cin>>str;
	ll A=0,D=0;
	for(ll i=0;i<str.length();i++)
	{
		if(str[i]=='A')
		 A++;
		if(str[i]=='D')
		 D++;
	} 
	if(A>D)
	cout<<"Anton";
	else if(D>A)
	 cout<<"Danik";
	else
	  cout<<"Friendship";
return 0;
}

