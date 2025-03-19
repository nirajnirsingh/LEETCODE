class Solution {
public:

    // --------memoisation-----------

    // int maxrob(vector<int>& nums, int index, int end,vector<int>& dp)    {

    //     if (index > end) {
    //       
    //         return 0;
    //     }
    //     if(index == end) return nums[index];

    //     if (dp[index] != -1)
    //         return dp[index];

    //     return dp[index] = max(maxrob(nums, index + 1, end, dp),
    //                  (nums[index] + maxrob(nums, index + 2, end,dp)));
    // }

    //-------tabulation------

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int>dp(n,-1);
        if(n==1) return nums[0];

        dp[n-1] = nums[n-1];
        dp[n-2] = max(nums[n-1],nums[n-2]);

        for(int i = n-3; i>=0; i--){
            dp[i] = max(dp[i+1] , nums[i]+dp[i+2]);
        }
      return   max(dp[0] , dp[1]);
    }
};