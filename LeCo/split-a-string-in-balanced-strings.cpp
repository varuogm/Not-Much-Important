
class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,f=0,l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='R')
            {
                f=1;
                r++;
            }
            else
            {
                f=1;
                l++;
            }
          if(l==r)
          {
              cnt++;
              f=0;
          }
            
        }
        return cnt;
    }
};
