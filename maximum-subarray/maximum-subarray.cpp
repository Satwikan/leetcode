class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int curSum = 0;
        int maxSum = nums[i];
        while(i < nums.size()){
            if (curSum < 0) curSum = 0;
            curSum += nums[i];
            maxSum = curSum > maxSum ? curSum : maxSum;
            i++;
        }
        return maxSum;
    }
};