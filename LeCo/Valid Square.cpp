/*
Square has 4 sides they must be the same --> 1set
Square has 2 diagonal they must be the same --> 2set
Store the possibility into an unordered_set
if unordered_set size == 2 return true
*/

class Solution {
public:
    double distance(vector<int>&p1, vector<int>&p2) {
        return sqrt((p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        vector < vector<int> > points{p1,p2,p3,p4};
        unordered_set <double> US;
        for(int i = 0; i < 4; ++i) {
            for(int j = i+1; j < 4; ++j) {
                double length = distance(points[i],points[j]);
                if (length == 0) return false;
                US.insert(length);
            }
        }
   return US.size()==2;}        
};
