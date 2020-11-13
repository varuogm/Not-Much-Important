#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	//combinations
	int arr[12]={4,7,47,74,444,447,474,744,777,774,747,477};//1000 constraint tak ke yahi solution he bas
	int count=0;
	for(int i=0;i<12;i++)
	{
		if(n%arr[i]==0 )
		 count=1;
	}
	if(count==1)
	  cout<<"YES";
	else
	 cout<<"NO";
return 0;	
}
