class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target, j, k;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++){
            if (i != 0 && nums[i] == nums[i-1]) continue;
            target = -1*nums[i];
            j = i+1, k = nums.size() - 1;
            while (j < k){
                if (nums[k] + nums[j] > target) {k--;continue;}
                if (nums[k] + nums[j] < target) {j++;continue;}
                if (nums[k] + nums[j] == target){
                    vector<int> lst{nums[i], nums[j], nums[k]};
                    ans.push_back(lst);
                    j++;
                    while(nums[j] == nums[j-1] && j < k) j++;
                }
            }
        }
        
        return ans;
    }
};