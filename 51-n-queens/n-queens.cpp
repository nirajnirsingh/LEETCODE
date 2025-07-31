class Solution {
public:

    bool isSafe(vector<string>&board, int row, int col, int n){

        for(int j=0; j<board.size(); j++){
            if(board[row][j] == 'Q')
             return false;
        }

        for(int j=0; j<board.size(); j++){
            if(board[j][col] == 'Q')
             return false;
        }
        
        

        int j=row-1, k=col-1;

        while(j>=0 && k>=0){

            if(board[j][k] == 'Q') return false;

            j--; k--;
        }

        j=row-1;
        k=col+1;

        while(j>=0 && k>=0){

            if(board[j][k] == 'Q') return false;

            j--; k++;
        }

        return true;
        
    }

    void NQueens(int row,int n, vector<vector<string>> &ans, vector<string>&board){

        if(row == n){
            ans.push_back({board});
            return;
        }

        for(int i=0; i<n; i++){

            if(isSafe(board, row, i, n)){

                board[row][i] = 'Q';
                NQueens(row+1, n, ans, board);
                board[row][i] = '.'; 
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {

    vector<vector<string>> ans;
    vector<string>board(n,string(n,'.'));

    NQueens(0, n, ans, board);
    
    return ans;  
    }
};