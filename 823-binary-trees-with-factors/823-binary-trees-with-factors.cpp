class Solution {
public:
    // Time Complexity: O(N^2)
    // Space: O(N)
    int mod = 1000000007; 
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> store;
        vector<long long>dp(n, 1);
        for (int i = 0; i < n; i++) store[arr[i]] = i;
        int res = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int curr = arr[j];
                if (arr[i]%curr == 0 && store.find(arr[i]/curr) != store.end())
                    dp[i] = (dp[i] + dp[j] * dp[store[arr[i]/curr]])%mod;
            }
            res = (res + dp[i])%mod;
        }
        return res;
    }
};