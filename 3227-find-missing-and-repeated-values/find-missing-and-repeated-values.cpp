class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int>val;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                val.push_back(grid[i][j]);
            }
            
        }

        vector<int>count(val.size()+1,0);

        for(int i = 0; i<val.size() ; i++){
           count[val[i]]++;
          // cout<<val[i]<<" ";
        }
        vector<int>ans(2);
        for(int i = 0; i<count.size() ; i++){
            if(count[i] == 2)
             ans[0] = i;
            
            else if(count[i] == 0)
                ans[1] = i;
        }
        return ans;
    }
};