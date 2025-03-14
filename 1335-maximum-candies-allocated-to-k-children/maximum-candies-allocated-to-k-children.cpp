// class Solution {
// public:

//     pair<int,bool> min(vector<int>& candies, long long k){
        
//         int min = INT_MAX;
//         long long sum = 0;
//         for(int i=0; i<candies.size(); i++){
//             if(candies[i]<min)
//                 min = candies[i];

//           sum += candies[i];  
//         }

//         if(sum<k)
//          return {min,1};

//         return {min,0};
//     }
//     int maximumCandies(vector<int>& candies, long long k) {

//         pair<int,bool>minAndBase;

//         minAndBase = min(candies,k);

//         if(minAndBase.second == 1) return 0;

//         int min = minAndBase.first;

//         return min;
//     }
// };


class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long left = 1, right = *max_element(candies.begin(), candies.end());
        int result = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long children_count = 0;

            for (int pile : candies) {
                children_count += pile / mid;
            }

            if (children_count >= k) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};