class Solution {
public:
    void recr(vector<int>& candidates, vector<vector<int>>& res, int target, 
              int i, int n, vector<int> set, int sum) {
        if ((sum > target) || (i == n && sum != target)) return;
        if (i == n && sum == target) {
            res.push_back(set);
            return;
        }
        set.push_back(candidates[i]);
        recr(candidates, res, target, i, n, set, sum+candidates[i]);
        set.pop_back();
        recr(candidates, res, target, i+1, n, set, sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        recr(candidates, res, target, 0, candidates.size(), {}, 0);
        return res;
    }
};