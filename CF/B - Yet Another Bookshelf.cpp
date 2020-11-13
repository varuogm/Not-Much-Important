/*Div 3 My AC solution*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename T>      // Front se pop ka template he yue 
void pop_front(std::vector<T> &v)
{
	if (v.size() > 0) {
		v.erase(v.begin());
	}
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{

		int n;
		cin>>n;
		int k;
		vector <int> v;
		for(int i=0;i<n;i++)
		{
		 cin>>k;
		 v.push_back(k);
		}
    
		while(v.front()!=1){
     	pop_front(v);
		}
    
		while(v.back()!=1){
		v.pop_back();
		}
    
		int sum=0;
    
		for(int i=0;i<v.size();i++)
		{
			if( v[i] ==0)
			 sum++;
		}
	cout<<sum<<"\n";		
	}
return 0;
}
/*
                             ───▄▄─▄████▄▐▄▄▄▌
                             ──▐──████▀███▄█▄▌
                             ▐─▌──█▀▌──▐▀▌▀█▀
                             ─▀───▌─▌──▐─▌
                             ─────█─█──▐▌█
                        ────────────────────────╔╗
                        ╔══╦══╦╗╔╦═╦══╦╗╔╗╔╗╔╦══╬╬══╦══╗
                        ║╔╗║╔╗║║║║╔╣╔╗║╚╝║║╚╝║╔╗╠╣║═╣║═╣
                        ║╚╝║╚╝║╚╝║║║╔╗╠╗╔╝║║║║╔╗║║║═╣║═╣
                        ╚═╗╠══╩══╩╝╚╝╚╝╚╝─╚╩╩╩╝╚╣╠══╩══╝
                        ╔═╝║───────────────────╔╝║
                        ╚══╝───────────────────╚═╝

*/
