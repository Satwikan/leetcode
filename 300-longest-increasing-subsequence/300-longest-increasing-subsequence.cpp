class Solution {
public:
    // Time Complexity: O(N^2)
    // Space: O(N)
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int cnt[n];
        cnt[0] = 1;
        int res = 1;
        for (int i = 1; i < n; i++) {
            cnt[i] = 1;
            for (int j = i-1; j >= 0; j--) {
                if (nums[j] < nums[i] && cnt[i] < cnt[j] + 1) {
                    cnt[i] = max(cnt[i], cnt[j]+1);
                    // lst[i] = nums[j];
                }
            }
            res = max(res, cnt[i]);
        }
        // for (int i = 0; i < n; i++) cout << cnt[i] << " " << lst[i] << endl;
        return res;
    }
};