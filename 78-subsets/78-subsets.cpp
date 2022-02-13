class Solution {
public:
    // recursion
    void recursion(vector<vector<int>>& res, vector<int>& nums,vector<int>subset, int i=0){
        if (i == nums.size()) {
            res.push_back(subset);
            // subset.assign({});
            return;
        };
        recursion(res, nums, subset, i+1);
        subset.push_back(nums[i]);
        recursion(res, nums, subset, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        recursion(res, nums, subset);
        return res;
    }
};