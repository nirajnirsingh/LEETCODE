class Solution {
public:

    void sz(vector<vector<int>>& v, int i, int j) {
        
        int m = v.size();
        int n = v[0].size();


        for(int k=0; k<n; k++){
            v[i][k] = 0;
        }

        for(int k=0; k<m; k++)
           v[k][j] = 0;
    }

    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>v(m, vector<int>(n));

        v =  matrix;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
               cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    sz(v, i, j);
                }
            }
        }

        matrix = v;
    }
};