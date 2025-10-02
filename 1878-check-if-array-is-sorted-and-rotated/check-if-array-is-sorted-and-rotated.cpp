class Solution {
public:
    bool check(vector<int>& nums) {
     bool flag=false;
        for(int i=0;i<nums.size() - 1;i++) {
            if(nums[i]>nums[i+1])           {
                if(flag== true) return false;
                flag= true;
            
            if(nums[0]<nums[nums.size()-1])           return false ;}
    }return true;}
};