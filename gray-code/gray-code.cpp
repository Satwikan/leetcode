class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> ans = {0, 1};
        
        int mask = 0b10;
        int k = 2;
        
        while(k++ <= n) {
            for(int i = ans.size() - 1; i >= 0; --i) {
                ans.push_back(ans[i] | mask);
            }
            mask <<= 1;
        }
        
        return ans;
    }
};