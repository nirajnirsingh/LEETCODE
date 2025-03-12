class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int pc = 0;
        int nc = 0;

        for(auto i:nums){
            if(i<0)nc++;
            if(i>0)pc++;
        }
        return max(pc,nc);
    }
};