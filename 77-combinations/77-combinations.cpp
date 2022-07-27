class Solution {
public:
    void backtrack(int n, int k, vector<vector<int>>& res, vector<int>& comb) {
        if (k == 0) {
            res.push_back(comb);
            return;
        }
        if (n == 0) return;
        comb.push_back(n);
        backtrack(n-1, k-1, res, comb);
        comb.pop_back();
        backtrack(n-1, k, res, comb);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(n, k, res, comb);
        return res;
    }
};