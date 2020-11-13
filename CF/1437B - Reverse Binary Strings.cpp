#include <bits/stdc++.h>
using namespace std;
 
long long t, a, b, n;
string s;
 
int main() {
	cin >> t;
	while (t--) {
		a = 0, b = 0;
		cin >> n >> s;
		for (int i = 1; i < s.size(); i++)
			if (s[i] == s[i - 1])
				s[i] == '1'? a++: b++;
		cout << max(a, b) << endl;
	}
}
