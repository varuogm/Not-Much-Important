#include <bits/stdc++.h>
using namespace std;
int solve()
{
	int n;
	cin>>n;
	int x,maxi=INT_MIN;
	unordered_map<int,vector<int>> m;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		maxi=max(maxi,v[i]);
		m[v[i]].push_back(i);
	}

	for(auto it:m[maxi])
	{
		if((it-1>=0 && v[it]>v[it-1])||(it+1<n && v[it]>v[it+1]))
			return it+1;
	}

	return -1;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
		cout<<solve()<<endl;
}
