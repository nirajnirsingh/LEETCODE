class Solution {
public:
    // string convertToBase7(int num) {

    //     if (num == 0) return "0";
    //     int ans = 0;
    //     bool isNegative = num<0 ;
    //     num = abs(num);

    //     while(num){

    //         ans = ans*10 + (num % 7);
    //         num /= 7;
    //     }

    //     string s = to_string(ans);
    //     if(isNegative) s += "-";
    //     reverse(s.begin(), s.end());

    //     return s;
    // }
    string convertToBase7(int num) {

        if (num == 0)
            return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string s = "";

        while (num) {
            int rem = num % 7;
            s += to_string(rem);
            num /= 7;
        }

        if (isNegative)
            s += "-";

        reverse(s.begin(), s.end());

        return s;
    }
};