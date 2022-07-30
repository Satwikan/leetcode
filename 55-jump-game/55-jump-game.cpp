class Solution {
public:
   // Time Complexity: O(n^2)
    // Space: O(n)
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        bool memo[n+1];
        memo[1] = true;
        for (int i = 2; i <= n; i++) {
            int j = i-1;
            memo[i] = false; 
            while (j > 0) {
                if (memo[j] && nums[j-1] + j >= i) {
                    memo[i] = true;
                    break;
                } j--;
            }
        }
        return memo[n];
    }
};