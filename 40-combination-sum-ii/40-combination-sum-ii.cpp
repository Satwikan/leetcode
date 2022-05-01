class Solution {
public:
    void recr(vector<int>& candidates, vector<vector<int>>& res, int target, 
              int i, vector<int> set) {
        if (target == 0) {
            res.push_back(set);
            return;
        }
        for (int ni = i; ni < candidates.size(); ni++) {
            if (ni > i && candidates[ni] == candidates[ni-1]) continue;
            
            int pick = candidates[ni];
            if (target - pick < 0) break;
            set.push_back(pick);
            recr(candidates, res, target-pick, ni+1, set);
            set.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        recr(candidates, res, target, 0, {});
        return res;
    }
};