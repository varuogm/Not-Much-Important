#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x1,y1,x2,y2;
        double t1,t;
        cin>>x1>>y1;
        cin>>x2>>y2;
        t=(x2*y1+y2*x1);
        t1=(t/(y1+y2));
        cout << fixed << setprecision(2)<<t1<<endl;
    }
    return 0;
}
