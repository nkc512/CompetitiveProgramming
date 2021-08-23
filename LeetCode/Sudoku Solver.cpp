class Solution {
public:
    bool isValid(vector<vector<char>> board, int x,int y, char c)
    {
        int nrow=3*(x/3);
        int ncol=3*(y/3);
        for(int i=0;i<9;i++){
            if(board[x][i]==c) return false;
            if(board[i][y]==c) return false;
            if(board[nrow+i/3][ncol+i%3]==c) return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>> &board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        
                        if(isValid(board,i,j,k))
                        {
                            board[i][j]=k;
                            if(solve(board))
                                return true;
                            else
                                board[i][j]='.';
                        }
                        
                    }
                    return false;
                }
            }
        }
        return true;
    }
};