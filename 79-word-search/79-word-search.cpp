class Solution {
public:
    bool back(vector<vector<char>>& board, string word, int i, int j, int k) {
        if (k == word.size()-1) return true;
        // cout << i << " " << j << endl;
        int m = board.size(), n = board[0].size();
        k++;
        bool res = false;
        if (i < m-1 && board[i+1][j] == word[k]){
            char c = board[i][j];
            board[i][j] = '*';
            res = res || back(board, word, i+1, j, k);
            board[i][j] = c;
        }
        if (i > 0 && board[i-1][j] == word[k]){
            char c = board[i][j];
            board[i][j] = '*';
            res = res || back(board, word, i-1, j, k);
            board[i][j] = c;
        }
        if (j < n-1 && board[i][j+1] == word[k]){
            char c = board[i][j];
            board[i][j] = '*';
            res = res || back(board, word, i, j+1, k);
            board[i][j] = c;
        }
        if (j > 0 && board[i][j-1] == word[k]){
            char c = board[i][j];
            board[i][j] = '*';
            res = res || back(board, word, i, j-1, k);
            board[i][j] = c;
        }
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool res = false;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    res = res || back(board, word, i, j, 0);
                    // cout << i << " " << j << endl;
                }
            }
        }
        return res;
    }
};