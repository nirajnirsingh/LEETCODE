class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        //set<vector<int>>s;

        for (int i = 0; i < nums.size()-2; i++) {

            if(i>0 && nums[i] == nums[i-1] ) continue;
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k ) {

                
                if (nums[i] + nums[j] + nums[k] == 0) {
                    v.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;
                    while( j<k && nums[j] == nums[j-1]) j++;
                    
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        
        return v;
    }
};