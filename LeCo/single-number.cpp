class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int zor=0;
        for(int i=0;i<nums.size();i++)
        {
            zor^=nums[i]; 
        }
       return zor; 
    }
};
diff approach
 unordered_set<int> mySet;
    for(int i = 0;i < nums.size();++i){
        if(mySet.find(nums[i]) == mySet.end()) mySet.insert(nums[i]);
        else mySet.erase(nums[i]);
    }
    auto it = mySet.begin();
    return *it;
