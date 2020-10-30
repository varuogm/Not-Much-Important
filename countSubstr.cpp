#include<bits/stdc++.h>
using namespace std;

int countSubstr(string str,int n,char x,char y)
{
    
    int tot_count =0;
    int count_x=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==x)
        count_x++;
        if(str[i]==y)
        tot_count+=count_x;
    }
    return tot_count;
}

int main()
{
   int n;
    char a,b;
    cin>>n;
     char str[n];
     cin>>str;
     cin>>a>>b;
    char x=a,y=b;
    cout<<countSubstr(str,n,x,y);
    return 0;
}s
