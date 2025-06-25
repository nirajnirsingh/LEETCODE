class Solution {
public:
    //

    double myPow(double x, int n) {

        long long binf = n;
        double ans = 1.0;

        if(n<0){
            x = 1/x;
            binf = -binf;
        }

        while (binf > 0) {

            if (binf % 2 == 1) {
                ans *= x;
            }
            x *= x;

            binf /= 2;
        }
        // if (n < 0)
        //     ans = 1 /ans;
         return ans;
    }
};