  /*ll maxN;
	maxN = 100000;
	ll a[maxN+1];
	for(ll i=2;i<=maxN;i++) 
	  a[i]=1;
	a[0] =0; a[1] =0; 
	
	for(ll i=2;i*i<=maxN;i++){
		if(a[i]){
			for(ll j=i*i;j<=maxN;j+=i){
				a[j] = 0;
			}
		}
	}
*/

--------
	
#include<bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;
int ar[1001];
int maxN = 1001;

std::vector<int > v(maxN,1);//intialzed all with 1

void seive(){
  v[0]=0;v[1]=0; 
  for(int i=2;i*i<=maxN;i++){
    if(v[i]){
      for(int  j=i*i;j<=maxN;j+=i){
        v[j] = 0;
      }
    }
  }
}
int main()
{

int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
seive();

if(v[n]==1)
   cout<<"yes prime\n";
else  
  cout<<"nahi he prime\n";

}
return 0;
}
