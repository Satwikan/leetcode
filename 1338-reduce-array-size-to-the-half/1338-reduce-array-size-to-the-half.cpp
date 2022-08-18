class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (auto x: arr) mp[x]++;
        vector<pair<int, int>> v;
        for(auto x: mp) v.push_back({x.second, x.first});
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int cnt = n;
        int i = 0;
        for (auto x: v) {
            if (cnt <= n/2) break;
            cnt -= x.first;
            i++;
            // cout << x.first << " " << x.second << endl;
        }
        return i;
    }
}; 