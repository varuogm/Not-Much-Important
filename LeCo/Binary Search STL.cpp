/*
                             ───▄▄─▄████▄▐▄▄▄▌
                             ──▐──████▀███▄█▄▌
                             ▐─▌──█▀▌──▐▀▌▀█▀
                             ─▀───▌─▌──▐─▌
                             ─────█─█──▐▌█
                        ────────────────────────╔╗
                        ╔══╦══╦╗╔╦═╦══╦╗╔╗╔╗╔╦══╬╬══╦══╗
                        ║╔╗║╔╗║║║║╔╣╔╗║╚╝║║╚╝║╔╗╠╣║═╣║═╣
                        ║╚╝║╚╝║╚╝║║║╔╗╠╗╔╝║║║║╔╗║║║═╣║═╣
                        ╚═╗╠══╩══╩╝╚╝╚╝╚╝─╚╩╩╩╝╚╣╠══╩══╝
                        ╔═╝║───────────────────╔╝║
                        ╚══╝───────────────────╚═╝
           */
#VarouG solution 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (binary_search(nums.begin(), nums.end(), target))
        {
            auto x= lower_bound(nums.begin(), nums.end(), target) - nums.begin();
             return x;
        }
        else
            return -1;
    }
};

---------------------------
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
