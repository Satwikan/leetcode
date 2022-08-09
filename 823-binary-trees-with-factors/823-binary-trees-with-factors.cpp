class Solution {
public:
    int mod = 1000000007; 
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> store;
        for (int i = 0; i < n; i++) store[arr[i]] = i;
        vector<long long>dp(n, 1);
        int res = 1;
        // for (int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int curr = arr[j];
                if (arr[i]%curr == 0 && store.find(arr[i]/curr) != store.end()) {
                    dp[i] = (dp[i] + dp[j] * dp[store[arr[i]/curr]])%mod;
                    // cout << "done\n";
                }
            }
            res = (res + dp[i])%mod;
        }
        // for (int i = 0; i < n; i++) cout << dp[i] << " ";
        // cout << endl;
        return res;
    }
};