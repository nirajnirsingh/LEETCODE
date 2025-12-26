class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      int low =0, high = 0;

      int len = 0;
      int max_len = 0;
      unordered_map<char,int>cnt;

       for(int high=0; high<s.size(); high++){
            cnt[s[high]]++;
           

            for(auto i:cnt){
                if(i.second > 1){
                    cnt[s[low]]--;
                    low++;
                }
            }
            len = high - low + 1; 
            max_len = max(max_len,len);
       }
       return max_len; 
    }
};



// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i = 0, j, size = 0;
//         int n = s.size();

//         // if(n==0)
//         // return 0;
//         // if(s==" ")
//         // return 1 ;
//         // for (int i = 0; i < n; i++) {
//         //     for (j = i + 1; j < n; j++) {
//         //         if (s[i] == s[j]) {

//         //                  if(size<j-i){
//         //                    size = j-i;
//         //                }
//         //                i++;
//         //         }

//         int count = 0;

//         int i=0;

//         while(i<s.size()){
//             int j=i;
//             unordered_map<char,int>win;
//             char f = s[i];
//             while(j<s.size() && win.find(s[i]) != win.end()){
//                 count++;
//                 j++;
//             }
//         }
            
//     }
// };