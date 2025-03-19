class Solution {
public:
    int maxrob(vector<int>& nums, int index, int end,vector<int>& dp) {

        if (index > end) {
            // ans.push_back(sum);
            return 0;
        }
        if(index == end) return nums[index];

        if (dp[index] != -1)
            return dp[index];

        return dp[index] = max(maxrob(nums, index + 1, end, dp),
                     (nums[index] + maxrob(nums, index + 2, end,dp)));
    }
    int rob(vector<int>& nums) {

        int n = nums.size();
        
        vector<int> ans;
        vector<int>dp(n,-1);

      return   maxrob(nums, 0, n-1, dp);

    }
};