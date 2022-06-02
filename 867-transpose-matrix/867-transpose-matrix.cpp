class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       //  for (int i = 0; i < matrix.size(); i++) {
       //     for (int j = 0; j < matrix[0].size(); j++) {
       //         cout << matrix[i][j] << " ";
       //     }
       //      cout << endl;
       // }
        vector<vector<int>> res;
       for (int j = 0; j < matrix[0].size(); j++) {
           vector<int> temp;
           for (int i = 0; i < matrix.size(); i++) {
               temp.push_back(matrix[i][j]);
           }
           res.push_back(temp);
       }
       //  for (int i = 0; i < matrix.size(); i++) {
       //     for (int j = 0; j < matrix[0].size(); j++) {
       //         cout << matrix[i][j] << " ";
       //     }
       //     cout << endl;
       // }
        return res;
    }
};