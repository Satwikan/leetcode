class Solution {
public:
    // Time Complexity: O(n)
    // Space: O(1)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int i = 1;
        int cursum = nums[0];
        while (i < n) {
            if (cursum < 0) cursum = 0;
            cursum += nums[i];
            sum = max(sum, cursum);
            i++;
        }
        return sum;
    }
};