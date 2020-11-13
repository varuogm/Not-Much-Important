//ref=https://github.com/varuogm/-Not-much-importatnt/blob/e5573cb65b9554f919551882eeb80a026dc49f66/Panagram.cpp
#include <bits/stdc++.h> 
using namespace std; 

bool checkPangram(string & str) { 
 
	vector<bool> mark(26, false);  
	int index; 
 
	for (int i = 0; i < str.length(); i++) { // If uppercase character,subtract 'A' to find index. 
		if ('A' <= str[i] && str[i] <= 'Z') 
			index = str[i] - 'A'; 
      // If lowercase character,subtract 'a' to find index. 
		else if ('a' <= str[i] && str[i] <= 'z') 
			index = str[i] - 'a'; 
        else       // If this character is not an alphabet, skip to next one.
			continue; 
		mark[index] = true; 
	} 
  
// Return false if any character is unmarked 
	for (int i = 0; i <= 25; i++) 
		if (mark[i] == false) 
			return (false); 
	// If all characters were present 
	return (true); 
} 
 
int main() 
{ 
    int  n;
    cin>>n;
	string str ;
	cin>>str; 
	if (checkPangram(str) == true) 
		printf("YES"); 
	else
		printf("NO"); 
	return 0; 
}

