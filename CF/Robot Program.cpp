#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
	 int t;
	 cin>>t;
	 while(t--)
   {
	 	int x,y;
    cin >> x >> y;
    int maxx = max(x,y);
    if(abs(x-y)<=1)
      cout << x+y << endl;
    else
      cout << (2*maxx)-1 << endl;
	 }
return 0;
}
