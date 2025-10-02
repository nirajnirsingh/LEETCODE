class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // set<int , greater<int>> set;




        // for(int i=0;i<nums.size();i++){
        //     set.insert(nums[i]);
        // }

        // for(auto i : set)
        //   nums.insert(nums.begin() , i) ;

        // return set.size();


        /////////////////////////////
        // int j ;
        // vector<int> ans;
        // for(int i=0 ; i<nums.size(); i++){
        //     j= i+1;
        //     if(nums[i] != nums[j])
        //      {
        //         ans.push_back(nums[i]);
        //         i = j;
        //      }
        //      else
        //         j++;
            
        // }
        // return ans.size();


        ///////////////////////

        int j = 0;

        for(int i =0; i<nums.size(); i++){
            if(nums[j] != nums[i]){
                nums[j+1] = nums[i];
                j++;
            }
        }
        // vector<int>v;
        // for(int i=0; i<=j; i++)
        //  v.push_back(nums[i];)

        return j+1;
    }
};