[link](https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3520/)

/*Since difference of two costs nothing, so all even positions can be considered as single, simultaneously consider all odd positions at single place.
Now move chips from odd to even position or even to odd position
*/


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even_count=0;
        int odd_count=0;
        int n=position.size();
        for(int i=0;i<n;i++){
            if(position[i] & 1){
                odd_count++;
            }
            else
                even_count++;
        }
        return min(even_count,odd_count);
    }
};
