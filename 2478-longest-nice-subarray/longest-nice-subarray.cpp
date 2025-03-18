class Solution {
public:
    // int longestNiceSubarray(vector<int>& nums) {
        
    //     int n = nums.size();
    //     int count ;

    //     for(int i=1; i<n; i++){

    //         int j = i;
    //         count = 0;

    //         while(j<n){

    //             if(nums[j] & nums[j-1]){
    //                 break;
    //             }
    //             count++;
    //             j++;
    //         }
    //     }

    //     return count;
    // }

    int longestNiceSubarray(vector<int>& nums) {
    int n = nums.size();
    int start = 0, or_mask = 0, maxLen = 0;

    for (int end = 0; end < n; end++) {
        // If nums[end] has a conflicting bit, shrink window
        while ((or_mask & nums[end]) != 0) {
            or_mask ^= nums[start]; // Remove nums[start] from window
            start++;
        }

        // Add nums[end] to the OR mask
        or_mask |= nums[end];

        // Update maximum length
        maxLen = max(maxLen, end - start + 1);
    }

    return maxLen;
}

};