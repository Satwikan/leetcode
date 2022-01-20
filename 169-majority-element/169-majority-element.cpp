class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        // cout << nums[0] << nums[1] << nums[2];
        return nums[(nums.size()-1)/2];
    }
};