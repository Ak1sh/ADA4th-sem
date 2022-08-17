class Solution {
public:
    void f(int col,vector<vector<string>> &answer, vector<string> board, int n,vector<int> leftrows, vector<int> upperdiagonal, vector<int> lowerdiagonal)
     {
        if(n== col)
        {
            answer.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
             if(leftrows[row]==0 && upperdiagonal[n-1+col-row]==0 && lowerdiagonal[row+col]==0)
             {
                 leftrows[row]=1;
                 upperdiagonal[n-1+col-row]=1;
                 lowerdiagonal[row+col]=1;
                 board[row][col]='Q';
                 f(col+1,answer,board,n,leftrows,upperdiagonal,lowerdiagonal);
                 board[row][col]='.';
                 leftrows[row]=0;
                 upperdiagonal[n-1+col-row]=0;
                 lowerdiagonal[row+col]=0;
             }
         }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
  
       vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
        vector<int> leftrows(n,0), upperdiagonal(2*n-1 ,0), lowerdiagonal(2*n-1,0);
        f(0,answer,board,n,leftrows,upperdiagonal,lowerdiagonal);
        return answer;
    }
};
