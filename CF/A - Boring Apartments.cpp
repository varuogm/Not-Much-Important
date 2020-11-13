/*Div 3 My AC solution*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{ 
//sidha map karra die bas khel khtam
	 int plac[36]={1,11,111,1111,2,22,222,2222,3,33,333,3333
		,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,
		8,88,888,8888,9,99,999,9999};
		int arr[36]={1,2,3,4,1,2,3,4,1,2,3,4
		,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,
		1,2,3,4,1,2,3,4};
    
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int pos,sum=0;;
		for(int i=0;i<36;i++)
		{
			if(plac[i]==n)
			{  pos=i+1;
			   //cout<<"pos is"<<pos;
				break;
			}
		}
		
		for(int j=0;j<pos;j++)
		{
			//cout<<sum<<" ";
			sum+=arr[j];
		}
	cout<<sum<<endl;	
	}
return 0;
}
/*

                             ───▄▄─▄████▄▐▄▄▄▌
                             ──▐──████▀███▄█▄▌
                             ▐─▌──█▀▌──▐▀▌▀█▀
                             ─▀───▌─▌──▐─▌
                             ─────█─█──▐▌
 */
