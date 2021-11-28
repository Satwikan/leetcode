class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        bool neg = false;
        if (nums[0] < 0) neg = true;
        
        int n = nums.size();
        for (int i = 0; i < n; i++) nums[i] = nums[i] * nums[i];
        
        if(!neg) return nums;
        vector<int> res(n);
        
        int l = 0, r = n - 1;
        for (int i = n-1; i > -1; i--) {
            if (nums[l] >= nums[r]) res[i] = nums[l++];
            else res[i] = nums[r--];
        }
        return res;
    }
};