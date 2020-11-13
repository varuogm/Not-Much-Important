//xor-operation-in-an-array
class Solution {
public:
    int xorOperation(int n, int start) {
        int zor=0;
        for(int i=0;i<n;i++)
        {
            
            zor=zor^start;
            start+=2;
            
        }
        return zor;
    }
};
