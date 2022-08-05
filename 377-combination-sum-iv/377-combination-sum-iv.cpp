class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<uint> dp(target + 1);
        dp[0] = 1;
        for (int j = 1; j < target+1; j++) {
            for (auto& num : nums){
                if (num <= j) dp[j] += dp[j-num];
                
            }
        }
        return dp[target];
    }
};