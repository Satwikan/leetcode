class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end) {
        int l = start, k = 0, r = mid+1, size = end + 1 - start;
        vector <int>sorted(size, 0);
        while (l <= mid && r <= end)
            sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
        while (l <= mid) sorted[k++] = nums[l++];
        while (r <= end) sorted[k++] = nums[r++];
        for (int i = 0; i < size; i++)
            nums[start+i] = sorted[i];
    }
    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return;
        int mid = (end - start)/2 + start;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, start, mid, end);
    }
    vector<int> sortArray(vector<int>& nums) {
       mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};