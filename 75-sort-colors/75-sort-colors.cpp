class Solution {
public:
    void sortColors(vector<int>& nums) {
        bool sorted = false;
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i+1]) {
                    sorted = false;
                    swap(nums[i], nums[i+1]);
                }
            }
        }
    }
};