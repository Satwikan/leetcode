class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        //validating all the rows
        int rows = board.length;
        for(int i = 0;i<rows;i++){
            if(!validaterow(i,board)) return false;
        }
        //validating all the cols
        for(int i = 0;i< rows;i++){
            if(!validatecol(i,board)) return false;
        }
        //validating all the submatrices of 3*3
        for(int i = 0;i<9;i = i + 3){
            for(int j = 0;j<9;j = j + 3){
               if(!validatesubmatrix(board,i,j)) return false;
            }
        }
        
        return true;
    }
    
    boolean validatesubmatrix(char [][] board,int row,int col){
        
        int [] arr = new int[10];
        
        for(int i = row;i<row + 3;i++){
            for(int j = col;j<col + 3;j++){
                int val = board[i][j] - '0';
                if(val > 0 && val < 10){
                    if(arr[val] == 1) return false; //it means repetition in submatrix
                     arr[val] = 1;  //marking that the val is present in this submatrix
                }
            }
        }
        
        return true;
    }
    
    boolean validaterow(int row,char[][] board){
        int [] arr = new int[10]; //1 to 9
        
        for(int j = 0;j<9;j++){ //check all cols for the current row
            int val = board[row][j] - '0';
            if(val > 0 && val < 10){
                if(arr[val] == 1) return false; //it means repetition in row
                 arr[val] = 1;  //marking that the val is present in this row
            }
        }
        
        return true;
    }
    
     boolean validatecol(int col,char[][] board){
        int [] arr = new int[10]; //1 to 9
        
        for(int i = 0;i<9;i++){ //check all rows for the current col
            int val = board[i][col] - '0';
            if(val > 0 && val < 10){
                if(arr[val] == 1) return false; //it means repetition in col
                 arr[val] = 1;  //marking that the val is present in this col
            }
        }
        
        return true;
    }
}