#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string str;
	cin>>str;
	int up=0,low=0;
	for(int i=0;i<str.length();i++)
	{
		if(isupper(str[i]))
		 up++;
		else
		 low++;
	}
	if(up>low)
	 {
	  std:: transform(str.begin(),str.end(),str.begin() ,:: toupper);
	  cout<<str;
	 }
	 else
	 {
	  std:: transform(str.begin(),str.end(),str.begin(),:: tolower);
	  cout<<str;
	 }
	 


return 0;
}

