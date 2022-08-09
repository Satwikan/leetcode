class Solution {
public:
    // Time Complexity: O(N)
    // Space: O(1)
    int maxScore(vector<int>& cp, int k) {
        int n = cp.size();
        vector<int> pre(n, -1);
        vector<int> seq(n, -1);
        pre[0] = cp[0];
        seq[n-1] = cp[n-1];
        for (int i = 1; i < n; i++) pre[i] = cp[i] + pre[i-1];
        for (int i = n-2; i >= 0; i--) seq[i] = cp[i] + seq[i+1];
        int mx = max(pre[k-1], seq[n-k]);
        for (int i = 0; i < k-1; i++) {
            int pt = 0, st = 0;
            pt += pre[i];
            st += seq[n-k+i+1];
            mx = max(mx, pt+st);
        }
        return mx;
    }
};