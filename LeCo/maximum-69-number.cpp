class Solution {
public:
    int maximum69Number (int num) {
        int flag=1;
    string str= to_string(num);  
     //reverse(str.begin(), str.end()); 
        for(int i=0;i<str.length();i++)
        {
            if((flag==1) && str[i]=='6')
            {
                str[i]='9';
                flag=0;
            }
        }
       //reverse(str.begin(), str.end()); 
      int ans = stoi(str);
       return ans ;
    }
};
