The solution is based on the fact that the output destination occurs only once.

I have created two arrays , 'start' and 'end' which contain start-points. and destination respectively.

In the second loop, if start == end --> end[i] = "". Removes the element that occurs in the start array.

Last loop finds the only element that is not ""(empty) and returns it.

Consider test-case :-
```
	paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
	start = ["London","New York","Lima"]
	end = ["New York","Lima","Sao Paulo"]
	
	After second loop:
	
	start = ["London","New York","Lima"] // No change
	
	end = ["","","Sao Paulo"]
	
	Third loop checks for only element in 'end' and returns it.
	
	"Sao Paulo" is returned.
  ```
  
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = int(paths.size());
        string start[len];
        string end[len];
        for (int i = 0; i < len; i++) {
            start[i] = paths[i][0];
            end[i] = paths[i][1];
        }
        for(int i = 0;i < len;i++){
            for(int j = 0; j < len;j++){
                if(start[i] == end[j]){
                    end[j] = "";
                }
            }
        }
        for(int i = 0;i < len;i++){
            if(end[i] != ""){
                return end[i];
            }
        }
        return "";
    }
};
