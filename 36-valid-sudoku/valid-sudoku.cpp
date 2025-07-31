class Solution {
public:

    bool isValid(vector<vector<char>>& board ,int row, int col){

        char ch = board[row][col];

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

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                if(board[i][j] != '.')
                 if(!isValid(board, i, j))
                  return false;
            }
        }
        return true;
    }
};