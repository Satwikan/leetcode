class Solution {
public:
    void recursion(vector<vector<int>>& res, vector<int>& nums, int i = 0){
        if (i == nums.size()-1) {
            res.push_back(nums);return;
        }
        for(int j = i; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            recursion(res, nums, i+1);
            swap(nums[i], nums[j]);
        }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        recursion(res, nums);
        return res;
            
    }
};