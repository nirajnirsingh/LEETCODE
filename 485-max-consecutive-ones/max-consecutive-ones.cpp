class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count =0, max1=0;

        for(auto i:nums){
            if(i){
                count++;
            }
            else{
               max1 =  max(max1, count);
               count = 0;
            }
        }
        max1 =  max(max1, count);
       return max1; 
    }
};