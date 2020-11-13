#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
		{
	        i+=2;
	        if(!flag)
			{  //first time me nhi chlega then baar baaar chal kr SPACES dega apan ko
	            cout<<" ";
	        }
	        //continue;
	    }
		else 
		{
	        flag=0;//first time inialtiozation to 0 taaki abse uper ka if chal pae and hume spaces provide kare
	        cout<<s[i];
	    }
	}
	return 0;
}
