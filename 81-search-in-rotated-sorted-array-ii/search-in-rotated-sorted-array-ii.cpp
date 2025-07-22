class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int st = 0;
        int end = nums.size()-1;

        while(st <= end){

            int mid = st+(end - st)/2;
            if(nums[mid] == target)
                return true;
            
            if(nums[st] == nums[mid]){
                while(st<mid && nums[st] == nums[mid]) st++;
            }
            if(nums[st] <= nums[mid]){

                if(nums[st]<= target && nums[mid] >= target)
                    end = mid-1;
                else
                    st = mid + 1;

            }else{
                if(nums[mid] <= target && nums[end] >= target)
                    st = mid + 1;
                else 
                   end = mid-1;
            }
        }
        return false;
    }
};