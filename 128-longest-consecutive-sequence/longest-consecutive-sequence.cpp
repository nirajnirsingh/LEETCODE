class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int count=0, maxcnt=0;

        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1] == 1){
                count++;
                maxcnt = max(maxcnt, count);
            }
            else if(nums[i]-nums[i-1] == 0){
                continue;
            }
            else{
                count = 0;
            }
        }
        if(nums.size())
        return maxcnt+1;

        return 0;
    }
};