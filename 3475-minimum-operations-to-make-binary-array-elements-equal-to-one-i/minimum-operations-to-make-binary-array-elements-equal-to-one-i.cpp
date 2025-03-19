class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();
        int i = 0 , count = 0;

        //if(n == 3) return 1;

        while ( i < n-2) {

            int k = i+3;

            //while(nums[i] == 1 && i < k) i++;

            if(nums[i] == 0 ){
            for(int j = i; j<i+3; j++){
                if (nums[j] == 0)
                    nums[j] = 1;
                else
                    nums[j] = 0;
            }
            count++;
            }
            i++;
        }

        
        for(auto x : nums){

            cout<<x<<" ";
            if(x == 0) return -1; 
        }
        return count;
    }
};