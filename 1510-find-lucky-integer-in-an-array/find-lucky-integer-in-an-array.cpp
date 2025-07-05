class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int luckyno = 0;

        vector<int>freq(501,0);

        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }

        for(int i=0; i<freq.size(); i++){
            if(freq[i] == i){
                luckyno = freq[i];
            }
        }
        if(luckyno == 0)return -1;
        return luckyno;
    }
};