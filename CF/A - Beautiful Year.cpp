#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int x;
    cin >>x;
    while(1)
    {
        y+=1;
        int a = x / 1000;
        int b = x / 100 % 10;
        int c = x / 10 % 10;
        int d = x % 10;
        if ( a!=b  &&  a!=c  &&  a!=d  &&  b!=c  &&  b!=d  &&  c!=d)
            break;
    }
    cout<<x<<"\n";
    return 0;
}

