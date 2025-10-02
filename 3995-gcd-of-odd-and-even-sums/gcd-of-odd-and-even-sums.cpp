class Solution {
public:

    int gcd(int a, int b){

        if(b == 1) return a;

        b %= a;
        if(b==0)return a;
        return gcd(b,a);
    }
    int gcdOfOddEvenSums(int n) {


     int   oddSum = n*n;
     int   evenSum = n*(n+1);

     return gcd(oddSum, evenSum);
        
    }
};