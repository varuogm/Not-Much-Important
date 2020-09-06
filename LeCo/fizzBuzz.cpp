class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string > v;
        for(int i=0+1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
                v.push_back("FizzBuzz");
            else if(i%3==0 && i%5!=0)
                 v.push_back("Fizz");
            else if(i%3!=0 && i%5==0)
                v.push_back("Buzz");
            else 
            { 
                string k= to_string(i);
                 v.push_back(k);
            }  
        }
    return v;
    }
};

SMART BOYY--- :down:
/*class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> fizzBuzz_;
        
        for(int i = 1; i <= n; i++) 
        {
            string str = "";
            
            if(i % 3 == 0)
                str += "Fizz";
            
            if(i % 5 == 0)
                str += "Buzz";
            
            if(str == "")
                str = to_string(i);
            
            fizzBuzz_.push_back(str);
        }
		
        return fizzBuzz_;
     }
};*/
