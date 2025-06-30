class Solution {
public:
    int findLHS(vector<int>& nums) {

        // int maxsize = 0;
        // vector<int>ans;

        // for(int i=0; i<nums.size()-1; i++){
            
        //     int temp1 = 1;
        //     int temp0 = 0;
        //    // ans.push_back(nums[i]);
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(abs(nums[j]-nums[i]) == 1)
        //         {
        //              temp1++;
        //             //  ans.push_back(nums[j]); 
        //         }
        //         else if(abs(nums[j]-nums[i]) == 0){
        //             temp0++;
        //         }
        //     }
        //     int temp =  0;
        //     if(temp1 > 1){
        //        temp = temp0+temp1;
        //     }else temp = 0;


        //     maxsize = max(maxsize,temp);
        // }
        // return maxsize;

        unordered_map<int,int>mp;
        int ans=0;

        for(auto i:nums){
            mp[i]++;
        }

        for(auto [key, value]: mp){
            if(mp.find(key+1) != mp.end()){
              ans = max(ans,value+mp[key+1]);
            }
        }

        return ans;
    }
};