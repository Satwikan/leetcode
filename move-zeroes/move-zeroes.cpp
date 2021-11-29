class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left < right) {
            if (nums[left] != 0) {left++;continue;}
            int temp = nums[left];
            int i = left;
             while (i < right) {
                 nums[i] = nums[i+1];
                 i++;
             }
            nums[i] = temp;
            // left++;
            right--;
            // cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
        }
    }
};