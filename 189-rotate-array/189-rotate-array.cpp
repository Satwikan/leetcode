class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);   
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if (k == 0) return;
        vector<int> nums2(n, 0);
        for (int i = 0; i+k < n; i++) {
            nums2[i+k] = nums[i];
        }
        int t = 0;
        for (int i = n-k; i < n; i++) {
            nums2[t] = nums[i];
            t++;
        }
        nums = nums2;
    }
};