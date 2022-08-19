class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        unordered_map<int, int> mp;
        for (auto x: nums) mp[x]++;
        for (auto x: mp) pq.push({x.second, x.first});
        while (k > 0 && !pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};