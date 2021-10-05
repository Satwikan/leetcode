class Solution {
// 
// 0, 0 -> 0, 3 -> 3, 3 -> 3, 0 -> 0, 0
// 0, 1 -> 1, 3
// 0, 2 -> 2, 3
// ===============
// 1, 0 -> 0, 2
// 1, 1 -> 1, 2
// 1, 2 -> 2, 2
// 1, 3 -> 3, 2
// 
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < (n + 1) / 2; i ++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];
                matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 -i];
                matrix[j][n - 1 - i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
};