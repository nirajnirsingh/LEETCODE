class Solution {
public:
    int maxrob(vector<int>& nums, int index, int end, vector<int>& dp) {

        if (index > end) {
            return 0;
        }
        if (index == end)
            return nums[index];

        if (dp[index] != -1)
            return dp[index];

        return dp[index] =
                   max(maxrob(nums, index + 1, end, dp),
                       (nums[index] + maxrob(nums, index + 2, end, dp)));
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> ans;
        vector<int> dp1(n, -1);
        vector<int>dp2(n,-1);
    return max( maxrob(nums, 0, n-2, dp1), maxrob(nums, 1, n - 1, dp2));
    }
};