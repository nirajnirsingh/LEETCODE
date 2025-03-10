class Solution {
public:
    
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size(), count = 0, i = 0;

        for(int j = 0; j < n + k -1; j++){
            if(colors[j % n] == colors[(j + 1) % n]){
                i = j;
            }

            if(j - i + 1 >= k){
                count++;
            }
        }

        return count;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int numberOfAlternatingGroups(vector<int>& c, int k) {

    //     int l = 0;
    //     int r = k - 1;
    //     int cnt = 0;

    //     while (r != 0) {

    //         int i = l + 1;
    //         bool t = true;

    //         while (i != r) {
    //             if (c[i] == c[i - 1]) {
    //                 t = false;
    //                 break;
    //             }
    //             i++;
    //         }
    //         if (t)
    //             cnt++;

    //         if (r == c.size()) {
    //             r = 0;
    //         }
    //         l++;
    //         r++;
    //     }
    //     return cnt;
    // }
};