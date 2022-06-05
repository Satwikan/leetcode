class Solution {
public:
    int totalNQueens(int n, int row = 0, int col = 0, int diag = 0, int anti_diag = 0) {
    if(row == n) return 1;
    int count = 0;
	for(int column = 0; column < n; column++) {
        int col_mask = 1 << column, diag_mask = 1 << row + column, anti_diag_mask = 1 << row - column + n - 1;
        if(!(col & col_mask) && !(diag & diag_mask) && !(anti_diag & anti_diag_mask))
			count += totalNQueens(n, row + 1, col | col_mask, diag | diag_mask, anti_diag | anti_diag_mask);
    }
	return count;
}
};