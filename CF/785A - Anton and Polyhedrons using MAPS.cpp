#include<bits/stdc++.h>
using namespace std;

int main()
{
	
ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
map <string ,int> mp;

mp["Tetrahedron"]=4;
mp["Cube"]=6;
mp["Octahedron"]=8;
mp["Dodecahedron"]=12;
mp["Icosahedron"]=20;

int n,sum=0;
cin >>n;
while (n--)
{
    string x;
    cin >>x;
    sum+=mp[x];
}
cout <<sum;
    return 0;
}
