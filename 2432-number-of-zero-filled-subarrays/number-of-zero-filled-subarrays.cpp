class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long total = 0;
        for(int i=0; i<nums.size(); i++){

            int j=i;
            if(nums[j] == 0){
                long long currCount = 0;
                while(j<nums.size() && nums[j] == 0 ){
                    currCount++;
                    j++;
                }
                 total += (currCount * (currCount+1))/2;
            }
            i=j;
           
        }

        return total;
    }
};