class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l = nums.size();
        for (int i = 0; i < l; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};