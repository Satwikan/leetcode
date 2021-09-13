class Solution {
public:
     vector<int> calculate(vector<int>& prev){
        vector<int> dp;
        dp.push_back(1);
        for (int i = 0; i < prev.size() - 1; i++){
            dp.push_back(prev[i] + prev[i+1]);
        }
        dp.push_back(1);
         return dp;
    }
    vector<vector<int>> generate(int numRows) {
        // if (numRows == 0) return;
        vector<int> dp(1, 1);
        vector<vector<int>>ans;
        ans.push_back(dp);
        numRows--;
        for (int i = 0; i < numRows; i++) {
            ans.push_back(calculate(ans[ans.size()-1]));
        }
        return ans;
    }
};