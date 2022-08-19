class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        vector<vector<int>> frecnt(100000, vector<int>(0));
        // cout << frecnt[0].size() << endl;
        // frecnt[0].push_back(2);
        
        unordered_map<int, int> mp;
        for (auto x: nums) mp[x]++;
        for (auto x: mp) frecnt[x.second].push_back(x.first);
        for (int i = frecnt.size()-1; i >= 0; i--) {
            for (int j = 0; k > 0 && j < frecnt[i].size(); j++) {
                res.push_back(frecnt[i][j]);
                k--;
            }
            if (k == 0) break;
        }
        return res;
    }
};