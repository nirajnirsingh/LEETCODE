class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        set<vector<int>>s;

        for (int i = 0; i < nums.size()-2; i++) {

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {

                if(i>0 && nums[i] == nums[i-1] ) continue;
                if (nums[i] + nums[j] + nums[k] == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++; k--;
                    
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for( auto x : s){
            v.push_back(x);
        }
        return v;
    }
};