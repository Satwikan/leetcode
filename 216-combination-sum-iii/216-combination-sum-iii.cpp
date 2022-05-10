class Solution {
public:
    void backtrack (int k, int n, vector<vector<int>>& res, vector<int> set, int sum, int count, int i) {
        if (count == k) {
            if (sum == n)
                res.push_back(set);
            return;
        }
        for (int j = i; j < 10; j++) {
            set.push_back(j);
            backtrack (k, n, res, set, sum+j, count+1, j+1);
            set.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        backtrack (k, n, res, {}, 0, 0, 1);
        return res;
    }
};