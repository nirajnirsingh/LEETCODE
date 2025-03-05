class Solution {
public:
    // long long coloredCells(int n) {

    //     if(n==1) return 1;
        
    //    // else
    //     return (4*(n-1))+coloredCells(n-1);
    // }
    long long coloredCells(int n) {

        
        return 2LL*n*(n-1)+1;
    }
};