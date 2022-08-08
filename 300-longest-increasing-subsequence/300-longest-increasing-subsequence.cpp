class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int cnt[n], lst[n];
        cnt[0] = 1, lst[0] = nums[0];
        int res = 1;
        for (int i = 1; i < n; i++) {
            cnt[i] = 1;
            lst[i] = nums[i];
            for (int j = i-1; j >= 0; j--) {
                if (lst[j] < nums[i] && cnt[i] < cnt[j] + 1) {
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