class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> cur(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                cur[j] += cur[j - 1];
            }
        }
        cout << "[";
        for (auto num: cur)
            cout << num << ", ";
        cout << "]" << endl;
        return cur[n - 1];
    }
};