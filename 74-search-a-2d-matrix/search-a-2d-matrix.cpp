class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size();
        int n = mat[0].size();
        int searchrow = -1;

        for(int i=0; i<m; i++){
            if(mat[i][n-1]>=target)
            {
                searchrow = i;
                break;
            }
        }
        if(searchrow == -1) return false;

        int leftc = 0, rightc = n-1;
        while(leftc<=rightc){

            int mid = leftc + (rightc-leftc)/2;

            if(mat[searchrow][mid] == target){
                return true;
            }
            else if(mat[searchrow][mid] > target){
                rightc = mid-1;
            }else
                leftc = mid+1;
        }
        return false;
    }
};