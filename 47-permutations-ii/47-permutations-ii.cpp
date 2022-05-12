class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& res, int i) {
        if (i == nums.size()-1) {
            if (find(res.begin(), res.end(), nums) == res.end())
                res.push_back(nums);
            return;
            
        }
        for (int j = i; j < nums.size(); j++) {
            // int count = 1;
            swap(nums[i], nums[j]);
            // int prev = nums[j];
            // while (nums[++j] == prev) count++;
            // backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int> set, int i+count)
            backtrack(nums, res, i+1);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums, res, 0);
        return res;
    }
};