class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<uint> dp(target + 1);
        dp[0] = 1;
        for (int j = 1; j < target+1; j++) {
            // cout << j << ": ";
            for (auto& num : nums){
                // if (nums[i] == j) dp[j] += 1;
                if (num <= j) dp[j] += dp[j-num];
                
            }
            // cout << j << " " << dp[j] << " ";
            // cout << endl;
        }
        // for (int j = 1; j < target+1; j++) cout << dp[j] << " ";
        return dp[target];
    }
};