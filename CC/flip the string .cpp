#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
{
    string str,fin;
	cin>>str>>fin;
//	int ODDzero=0,ODDone=0, EVENzero=0,EVENone=0;
	int Ocunt=0,ecunt=0;
	int fe=0,fo=0,k=1;	
	for(int i=0;i<str.length();i++)
	{
		if(i%2==1)  //odd index dekhega
		{
			if((str[i]==fin[i]) && (fo==1))
			{
				fo=0;
				//	fo=1;k++;
			}
			if((str[i]!=fin[i]) && (fo==0))
			{
			   Ocunt++;//pehle aya ya ni agar hua thn cnt++;
				fo=1;
			}  	
		}
		else//
		{
		  if((str[i]==fin[i]) && (fe==1))
			{
				fe=0;
			}
			if((str[i]!=fin[i]) && (fe==0))
			{
			   ecunt++;
				fe=1;
			}
			
		}
		/*if(i%2==1)  //odd index dekhega
		{
			if(str[i]=='0')
			   ODDzero++;
			else
			    ODDone++;	   	
		}
		else
		{
		   if(str[i]=='0')
			   EVENzero++
			else
			    EVENone++
			*/
	}
	int tot =(Ocunt+ecunt)/k;
	/*	if(ev>=3)ev/=2;
	if(od>=3)od/=2;*/
	cout<<tot<<"\n";
	}	
	
return 0;
}

