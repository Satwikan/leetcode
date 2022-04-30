class Solution {
public:
    void recr(vector<int>& nums, int ind, int n, vector<vector<int>>& res, vector<int> set) {
        if (ind == n) {
            bool flag = false;
            for (int i = 0; i < res.size(); i++) 
                if (res[i] == set)
                    flag = true;
            if (!flag) res.push_back(set);
            return;
        }
        recr(nums, ind+1, n, res, set);
        set.push_back(nums[ind]);
        recr(nums, ind+1, n, res, set);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        recr(nums, 0, nums.size(), res, {});
        return res;
    }
};