/*   ~~~~ QUESTION~~~~~

Let LCM(x,y) be the minimum positive integer that is divisible by both x and y.
 For example, LCM(13,37)=481, LCM(9,6)=18.
You are given two integers l and r. 
Find two integers x and y such that l=x<y=r and l=LCM(x,y)=r.*/#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


/*
   ~~~~~~~~~ANSWeR~~~~~~~~
    Suppose we have chosen x and y as the answer,
	 and x is not a divisor of y. Since LCM(x,y) belongs to [l,r], 
	 we could have chosen x and LCM(x,y) instead. So if the answer exists,
	 there also exists an answer where x is a divisor of y.

If 2l>r, then there is no pair (x,y) such that l=x<y=r
 and x|y. Otherwise, x=l and y=2l is the answer.*/	
int main()
{

ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll t;
	cin>>t;
	while(t--)
	{
       int l,r;
       cin>>l>>r;
       if(2*l>r)//not possible
        cout<<"-1 -1\n";
       else
        cout<<l<<" "<<2*l<<"\n";
	}
return 0;
}

