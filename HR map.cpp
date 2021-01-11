#include<bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;


void sol() {
  int n;
  cin>>n;
  int Max=0,k;
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    mp[k]++;
    if(mp[k]>Max)
      Max= mp[k];
  }
cout <<n - Max;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL); 
    sol();
return 0;
}


