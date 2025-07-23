class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        // vector<int>val;

        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[i].size(); j++){
        //         val.push_back(grid[i][j]);
        //     }
            
        // }

        // vector<int>count(val.size()+1,0);

        // for(int i = 0; i<val.size() ; i++){
        //    count[val[i]]++;
        //   // cout<<val[i]<<" ";
        // }
        // vector<int>ans(2);
        // for(int i = 0; i<count.size() ; i++){
        //     if(count[i] == 2)
        //      ans[0] = i;
            
        //     else if(count[i] == 0)
        //         ans[1] = i;
        // }
        // return ans;

        int n = grid.size();
        unordered_set<int>s;
        int a , b;

        int required_sum = 0;
        
        required_sum =  n*n * (n*n + 1)/2;

        int actual_sum = 0;

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                 actual_sum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                  a = grid[i][j];
                } 

                s.insert(grid[i][j]);
            }
            
            
        }

        b = required_sum - (actual_sum - a);

        return{a,b};
    }
};