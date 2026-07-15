class Solution {
    public boolean isValidSudoku(char[][] board) {
       int  n=board.length;
       int sms=3;
       boolean rf[][]=new boolean[n][10];
       boolean cf[][]=new boolean[n][10];
       boolean smf[][]=new boolean[n][10];
       for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            char ch=board[row][col];
            if(ch=='.') continue;
            int dig=ch-'0';
            int smi=(row/3)*3+col/3;
            if(rf[row][dig]||cf[col][dig]||smf[smi][dig]){
                return false;
            }
            rf[row][dig]=cf[col][dig]=smf[smi][dig]=true;
        }
       } 
    
    return true;
}
}
