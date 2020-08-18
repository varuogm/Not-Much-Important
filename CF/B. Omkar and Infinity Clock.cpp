#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
int t;
cin>>t;
while(t--)
{
ll n,k;
 cin>>n>>k;
ll a[n];

for(ll i=0;i<n;i++)
 cin>>a[i];
 
ll MAX=*max_element(a,a+n);

for(ll i=0;i<n;i++)
  a[i]=MAX-a[i];

MAX=*max_element(a,a+n);

for(ll i=0;i<n;i++)
 {
   if(k%2==0)//ye thoda ajeeb he ye if else condition kyu lagi idk
     cout<< MAX-a[i] <<" ";
   else
     cout<<a[i]<<" ";
 }
cout<<"\n";
}
return 0;
}

