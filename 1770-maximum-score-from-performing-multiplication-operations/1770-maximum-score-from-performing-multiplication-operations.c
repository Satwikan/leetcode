int max(int a, int b) { return a > b ? a : b; }
int maximumScore(int *nums, int numsSize, int *multipliers, int multipliersSize) {
    int n = numsSize, m = multipliersSize;
    int dp[m + 1];
    for (int i = 0; i <= m; i++) dp[i] = 0;
    for (int op = m - 1; op >= 0; op--) {
        int next_row[m + 1];
        for (int i = 0; i <= m; i++) next_row[i] = dp[i];
        for (int left = op; left >= 0; left--) {
            dp[left] = max(multipliers[op] * nums[left] + next_row[left + 1],
                           multipliers[op] * nums[n - 1 - (op - left)] + next_row[left]);
        }
    }
    return dp[0];
}