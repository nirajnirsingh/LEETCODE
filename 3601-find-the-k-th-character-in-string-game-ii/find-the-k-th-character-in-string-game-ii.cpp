class Solution {
public:
    // char kthCharacter(long long k, vector<int>& o) {

    //  int n = o.size();
    // string ans = "a";
    // // int i=0;
    // while(ans.size() < k){

    //     if(o[i] == 1){
    //         string temp = "";
    //         for(int j=0; j<ans.size(); j++){
    //             if(ans[j] != 'z')
    //             temp += ans[j]+1;
    //             else
    //                 temp += "a";
    //         }
    //         ans += temp;
    //     }else{
    //         string temp = "";
    //         for(int j=0; j<ans.size(); j++){
    //            if(ans[j] != 'z')
    //             temp += ans[j];
    //             else
    //                 temp += "a";
    //         }
    //         ans += temp;
    //     }
    //     i++;

    // }
    // return ans[k-1];

    // }
    char kthCharacter(long long k, vector<int>& operations) {
        int shift = 0;
        vector<long long> lengths;
        long long len = 1;

        for (int op : operations) {
            len *= 2;
            lengths.push_back(len);
            if (len >= k) break;
        }

        for (int i = lengths.size() - 1; i >= 0; --i) {
            long long half = lengths[i] / 2;
            int op = operations[i];
            if (k > half) {
                k -= half;
                if (op == 1) shift++;
            }
        }

        return (char)((('a' - 'a' + shift) % 26) + 'a');
    }
    
};