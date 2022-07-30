class Solution {
public:
   // Time Complexity: O(n)
    // Space: O(1)
    bool canJump(vector<int>& nums) {
        int n = nums.size(), farest = 0;
        for (int i = 0; i < n; i++) {
            if (farest < i) return false;
            farest = max(farest, i+nums[i]);
        }
        return true;
    }
};