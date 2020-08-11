/*
Every permutation is good.

Proof: We use the fact that for any set of numbers, 
it's bitwise OR is at least the maximum value in it. 
Now, we just need to show that any subarray of length len has at least one element greater 
than or equal to len. If the maximum element is <len, then, we have len elements all 
with values in the range [1,len-1]. By the pigeonhole principle, at least 2 of them 
must be the same contradicting the fact the it's a permutation.

Time Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
 	ll n;
 	cin>>n;
   for(ll i=0;i<n;i++)
 	{
 		cout<<i+1<<" ";
	 }
	cout<<endl;
 }
 
return 0;
}

