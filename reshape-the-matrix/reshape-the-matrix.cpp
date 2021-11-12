class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m*n != r*c) return mat;
        
        vector<vector<int>> res;
        int a = 0, b = 0;
        for (int i = 0; i < r; i++) {
            vector<int> row;
            for (int j = 0; j < c; j++) {
                if (b == n) {
                    b = 0; a++;
                }
                row.push_back(mat[a][b]);
                b++;
            }
            res.push_back(row);
        }
        return res;
    }
};