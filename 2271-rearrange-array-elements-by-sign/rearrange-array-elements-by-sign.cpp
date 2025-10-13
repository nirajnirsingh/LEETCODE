class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int ps = 1;
        int ng = 0;
        vector<int>pos;
        vector<int>neg;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        int i = 0;
        nums.clear();

        if(pos.size())
        nums.push_back(pos[0]);

        while(ps<pos.size() && ng<neg.size()){
            nums.push_back(neg[ng++]);
            nums.push_back(pos[ps++]);
        }
        while(ng<neg.size()){
            nums.push_back(neg[ng++]);
        }
        while(ps<pos.size()){
            nums.push_back(pos[ps++]);
        }

        return nums;
    }
};