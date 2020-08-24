class Solution {//
public:
    void reverseString(vector<char>& s) {
        int k= s.size();
        for(int i=0;i<k/2;i++)
        {
            char temp=s[i];
            s[i]=s[k-i-1];
            s[k-i-1]=temp;
            //swap(s[i],s[k-i-1]);
        }
   // return s;
    }
};
