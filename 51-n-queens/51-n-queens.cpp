class Solution {
public:
    // Time Complexity : O(N!), we have N choices in the first row, N-1 in the second row, N-2 in the next and so on... which brings overall time complexity to O(N!)
    // Space Complexity : O(N*N). Required for board and recursive stack.
    bool check(vector<string>& board, int i, int j) {
        int n = board.size();
        for (int k = 0; k < n; k++) {
            if (board[i][k] == 'Q' || board[k][j] == 'Q') return false;
        }
        // diagonal check
        int it = i-1, jt = j-1;
        while (it >= 0 && jt >= 0) {
            if (board[it][jt] == 'Q') return false;
            it--;jt--;
        }
        it = i+1; jt = j+1;
        while (it < n && jt < n) {
            if (board[it][jt] == 'Q') return false;
            it++;jt++;
        }
        it = i-1; jt = j+1;
        while (it >= 0 && jt < n) {
            if (board[it][jt] == 'Q') return false;
            it--;jt++;
        }
        it = i+1; jt = j-1;
        while (it < n && jt >= 0) {
            if (board[it][jt] == 'Q') return false;
            it++;jt--;
        }
        return true;
    }
    void backtrack(int n, int col, vector<string>& board, vector<vector<string>>& res) {
        if (col == n) {
            res.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (check(board, i, col)) {
                board[i][col] = 'Q';
                backtrack(n, col+1, board, res);
                board[i][col] = '.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        string strq = "";
        for (int i = 0; i < n; i++) strq += '.';
        vector<string> board(n, strq);
        vector<vector<string>> res;
        backtrack(n, 0, board, res);
        return res;
    }
};