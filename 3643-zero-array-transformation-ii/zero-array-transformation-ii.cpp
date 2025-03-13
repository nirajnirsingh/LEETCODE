// class Solution {
// public:
//     bool zeroArray(vector<int>& nums) {

//         int sum = 0;

//         for (auto j : nums) {
//             sum += j;
//             if (sum > 0)
//                 break;
//         }

//         if (sum == 0)
//             return 1;

//         return 0;
//     }

//     int minZeroArray(vector<int>& nums, vector<vector<int>>& q) {

//         int k = 0;

//         if (zeroArray(nums))
//             return 0;

//         for (int i = 0; i < q.size(); i++) {

//             int l = q[i][0];
//             int r = q[i][1];

//             int val = q[i][2];

//             for (int j = l; j <= r; j++) {
//                 if (val <= nums[j]) {
//                     nums[j] -= val;
//                 } else {
//                     nums[j] = 0;
//                 }
//             }

//             k++;
//             if (zeroArray(nums))
//                 return k;
//         }
//         return -1;
//     }
    
// };

class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), sum = 0, queryCount = 0;
        vector<int> diffArray(n + 1);

        for (int i = 0; i < n; i++) {
            while (sum + diffArray[i] < nums[i]) {
                queryCount++;
                if (queryCount > queries.size()) return -1;

                int left = queries[queryCount - 1][0], right = queries[queryCount - 1][1], value = queries[queryCount - 1][2];
                if (right >= i) {
                    diffArray[max(left, i)] += value;
                    if (right + 1 < diffArray.size()) {
                        diffArray[right + 1] -= value;
                    }
                }
            }
            sum += diffArray[i];
        }
        return queryCount;
    }
};
