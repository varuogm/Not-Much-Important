/*  PRIME FACTORIZATION GOURAV TAREEKA

   prime factors of 120 are
   2×2×2×3×5 or 2^3 × 3 × 5 stored in ans 

   and all prime uniquie factors in set uniq
   
*/
#include<bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;

std::vector<int > ans;
std::set<int > uniq;

int ar[1000001];
int maxN = 1000000;

void seive(int n){
  for(int i=1; i<=maxN; i++)  ar[i] = -1; 

    for(int i=2; i<=maxN; i++)
     {
      if(ar[i] == -1)
        {
         for(int j=i ;j<=maxN ; j+=i)
           {if(ar[j] == -1)
              ar[j] = i; }
        } 
    }
while(n>1)
{
  ans.push_back(ar[n]);
  uniq.insert(ar[n]);
  n=n/ar[n]; //like 20 ka 20->10->5->1
             //            >2 >2 >5
}
}

int main()
{

int n;
cin>>n;
seive(n);

for( auto x: ans)
 cout<<x<<" ";
return 0;
}
