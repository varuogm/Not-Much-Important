#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	int arr[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n,greater<int>());
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	sum = sum/2;
	ll nextsum=0,no;
	for(int i=0;i<n;i++)
	{
        nextsum += arr[i];
        if(nextsum == sum)
         {
        	no=i+1;
        	break;
		 }
		else if(nextsum >sum)
         {
        	no=i;
        	break;
		 }
		
	}
   cout<<no+1;
   
return 0;	
}
