class Solution {
public:

    bool isValid(vector<vector<char>>& board ,int row, int col, char ch){



        for(int i=0; i<9; i++){

            if(i != col && board[row][i] == ch)
            return false;            
        }

        for(int i=0; i<9; i++){

            if(i != row && board[i][col] == ch)
            return false;
        }

        int startrow = 3*(row/3);
        int startcol = 3*(col/3);

        for(int i=startrow; i<startrow+3; i++){
            for(int j=startcol; j<startcol+3; j++){
                if((i != row || j != col) && board[i][j] == ch) return false;
            }
        }

        return true;
    }

    

    bool solve(vector<vector<char>>& board, int row, int col){

        if(row == 9){
            return true;
        }

        int nextRow = row, nextCol = col + 1;
        if(nextCol == 9){
            nextRow = row+1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
            return solve(board, nextRow, nextCol);
        }


        for(int i=1; i<= 9; i++){

             
                 if(isValid(board, row, col, '0'+i))
                {
                    board[row][col] = '0'+i;
                   if(solve(board, nextRow, nextCol)){
                    return true;
                   }
                    board[row][col] = '.';
                }
             
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board,0,0);

    }
};