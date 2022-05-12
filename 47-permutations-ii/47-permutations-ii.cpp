class Solution {
public:
    void backtrack(vector<int> set, vector<vector<int>>& res, int n, unordered_map<int, int>& umap) {
        if (set.size() == n) {
            res.push_back(set);
            return;
        }
        for (auto ent: umap) {
            int key = ent.first;
            int count = ent.second;
            if (count == 0) continue;
            set.push_back(key);
            umap[key] = count-1;
            backtrack(set, res, n, umap);
            set.pop_back();
            umap[key] = count;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> umap;
        for (auto i: nums) {
            if (umap.find(i) == umap.end()) {
                umap[i] = 0;
            }
            umap[i] += 1;
        }
        backtrack({}, res, nums.size(), umap);
        return res;
    }
};