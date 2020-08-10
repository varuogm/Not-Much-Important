/*un_ordered map and map comp*/
/* 
MAP output -- a->2 / e->2 / g->1 / j->1 / m->1 / o->1 / r->1 / u->1 / v->1 /
unordered_map output  -- e->2 / m->1 / v->1 / a->2 / j->1 / u->1 / o->1 / r->1 / g->1 /
*/


#include<bits/stdc++.h> 
using namespace std; 

void printFrequency(string str) 
{ 
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
	// Traverse the map to print the  frequency 
	for (auto& it : M) { 
		cout << it.first << "->"
			<< it.second << " / "; 
	} 
} 

int main() 
{ 
	string str = "gouravmajee"; 
	printFrequency(str); 
	return 0; 
} 

