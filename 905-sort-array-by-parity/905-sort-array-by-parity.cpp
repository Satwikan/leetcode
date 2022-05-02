class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int e = 0, i = 0;
        while (i < nums.size()) {
            if (nums[i]%2 == 0) {
                swap(nums[i], nums[e]);
                e++;
            }
            i++;
        }
        return nums;
    }
};