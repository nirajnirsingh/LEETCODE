class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

        vector<int>v;

    //    for(int i=0; i<num.size(); i++) {
    //         for(int j=i+1; j<num.size(); j++) {

    //             if(num[i]+num[j] == target){
    //              v.push_back(i+1);
    //              v.push_back(j+1);
    //             }
    //         }
    //    }

      int first = 0;
      int second = num.size()-1;
      

      while(second > first){
        int temp = num[first]+num[second];

        if(temp == target){
         v.push_back(first+1);   
         v.push_back(second+1);
         return v;
       // return {first+1,second+1};
        }
        else if(temp>target){
            second--;
        }
        else if(temp<target){
            first++;
        }
      }
      return {-1,-1};
    }
};