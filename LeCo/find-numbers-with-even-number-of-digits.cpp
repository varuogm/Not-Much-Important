
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int tot=0,k=0;
        for(int i=0;i<nums.size();i++)
        {    k=0;
            while(nums[i]>0){
                 k++;
                nums[i]/=10;
            }
            
           if( k%2 == 0)
               tot++;   
        }
      return tot;  
    }
};
