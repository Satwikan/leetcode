class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // cout << matrix[0][0];
        int width = matrix[0].size();
        int length = matrix.size();
        int row = width-1;
        int col = 0;
        while(col < length && row > -1) {
            if (target > matrix[col][row]) col++;
            else if (target < matrix[col][row]) row--;
            else return true;
        }
        return false; 
    }
};