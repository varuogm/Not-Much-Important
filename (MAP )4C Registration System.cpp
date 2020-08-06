#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    map< string , int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;//first time mila to OK
            database[s] = 1;//mile hue ko badha diya
        }
        else
        {   //already presented to print 
            cout << s << database[s] << "\n";
            database[s] += 1;
        }
    }
    return 0;
}
