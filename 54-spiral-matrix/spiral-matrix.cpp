class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int r = matrix.size();
        int c = matrix[0].size();

        vector<int>v;

        int  srow = 0;
        int erow = r-1;
        int scol = 0;
        int ecol = c-1;

            
        while(srow <= erow && scol <= ecol){

            // first row
            for(int j=scol; j<=ecol; j++){
                v.push_back(matrix[srow][j]);
            
            }

            // end column
            for(int j=srow+1; j<=erow; j++){
                
                v.push_back(matrix[j][ecol]);
            
            }

            // end row
            for(int j=ecol-1; j>=scol; j--){
                if(srow == erow) break;
                v.push_back(matrix[erow][j]);
            
            }

            // 
            for(int j=erow-1; j>=srow+1; j--){
                if(scol == ecol) break;
                v.push_back(matrix[j][scol]);
            
            }
        srow++;
        erow--;
        scol++;
        ecol--;
        }
       return v; 
    }
};