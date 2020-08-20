class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mul=1;
        while(n>0)
        {
            int k=n%10;
            mul*=k;
            sum+=k;
            n/=10;    
        }
       return (mul-sum); 
    }
};
