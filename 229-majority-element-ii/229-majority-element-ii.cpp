class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<int> res;
        for (auto num: nums) {
            if (umap.find(num) == umap.end()) umap[num] = 0;
            umap[num] += 1;
        }
        for (auto i: umap) {
            if (i.second > nums.size()/3) res.push_back(i.first);
        }
        return res;
    }
};