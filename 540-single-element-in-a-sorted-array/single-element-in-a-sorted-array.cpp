class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int l=0, r=nums.size()-1, n=nums.size();

        if(nums.size() == 1) return nums[0];

        while(l<=r){
            //to find the mid element
           int mid = l+(r-l)/2;

            
            if(mid == 0 && nums[mid]!=nums[mid + 1]) return nums[mid];
            if(mid == n-1 && nums[n-2]!=nums[n-1]) return nums[mid];

            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
           }
           
            if( mid%2 == 0){
                
                if(nums[mid-1] == nums[mid])
                  r = mid-1;
                else
                  l = mid+1;
                
            }
            else {
                if(nums[mid-1] == nums[mid])
                  l = mid+1;
                else
                  r = mid-1;
            }
        }
        return -1;
        
    }
};