class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        int n=nums.size();
        int piviot=-1;

        while(i>-1){
            if(nums[i]<nums[i+1]){
              piviot = i;
              break;
            }
            i--;
        }
        //cout<<piviot;

        if(piviot == -1) reverse(nums.begin(),nums.end());
        else{
            
            for(int i=n-1; i>piviot; i--){
                if(nums[piviot]<nums[i]){
                  swap(nums[piviot],nums[i]);
                  break; 
                }
            }
            
           reverse(nums.begin()+piviot+1,nums.end());
        }
    }
};