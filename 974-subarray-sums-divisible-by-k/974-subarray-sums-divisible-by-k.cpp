class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(k+1, 0);
        int sum = 0;
        int cnt = 0;
        pre[0] = 1;
        for (int i = 0; i < n; i++) {
            sum = (sum + nums[i])%k;
            if (sum < 0) sum += k;
            cnt += pre[sum];
            pre[sum]++;
        }
        return cnt;
    }
};