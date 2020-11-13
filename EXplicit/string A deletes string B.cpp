/*un_ordered map and map comp*/
/* 
 OUTPUT-
 
 e->2 / m->1 / v->1 / a->2 / j->1 / u->0 / o->0 / r->0 / g->0 /

*/


#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str = "gouravmajee"; 
	string strr = "gour";
	
	unordered_map<char, int> M; 
	for (int i = 0; str[i]; i++) { 
// If the current characters is not found then insert current characters with frequency 1 
		if (M.find(str[i]) == M.end()) { 
			M.insert(make_pair(str[i], 1)); 
		} 
		// Else update the frequency 
		else { 
			M[str[i]]++; 
		} 
	} 
	
	for(int i=0;i<strr.length();i++)
	{
	 unordered_map<char, int> ::iterator it = M.find(strr[i]); 
      if (it != M.end())//this block checks the char strrr is in str or not if yes then it count-- else chalete raho
      M[strr[i]]--; 
	}
	
	// Traverse the map to print the  frequency 
	for (auto& it : M) { 
		cout << it.first << "->"
			<< it.second << " / "; 
	} 
	
	return 0; 
} 
// ref =https://www.geeksforgeeks.org/frequency-of-each-character-in-a-string-using-unordered_map-in-c/ and STACK OVERFLOWhttps://stackoverflow.com/questions/4527686/how-to-update-stdmap-after-using-the-find-method
