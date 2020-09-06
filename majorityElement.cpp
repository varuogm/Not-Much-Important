class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
    unordered_map<int, int> m; 
      int size= nums.size();
	for(int i = 0; i < size; i++) 
		  m[nums[i]]++; 
      
	int count = 0,k; 
	for(auto i : m) 
	{ 
		if(i.second > size / 2) 
		{ 
			k= i.first;
            break;
		} 
	} 
    return k;    
    }
};
