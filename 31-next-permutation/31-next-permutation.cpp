class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() == 1) return;
        int i = nums.size() - 1;
        int j = nums.size() - 2;
        while (j > -1 && nums[j] >= nums[i]) {
            j--;
            i--;
        }
        if (j < 0 && nums[j+1] >= nums[i+1]) {
            reverse(nums.begin(), nums.end());
            return;
        }
        cout << "i: " << i << ", j: " << j << endl;
        int justBiggerThanJ = i;
        while (i < nums.size()) {
            if (nums[i] <= nums[justBiggerThanJ] && nums[j] < nums[i])
                justBiggerThanJ = i;
            // cout << i << endl;
            i++;
        }
        cout << "justBiggerThanJ: " << nums[justBiggerThanJ] << endl;
        // cout << nums[3] << " " << nums[4] << endl;
        swap(nums[j], nums[justBiggerThanJ]);
        // cout << nums[3] << " " << nums[4] << endl;
        reverse(nums.begin()+j+1, nums.end());   
        // cout << nums[3] << " " << nums[4] << endl;
    }
};