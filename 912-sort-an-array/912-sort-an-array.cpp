class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end){
       int i = start, j = mid+1, k = 0, size = (end-start) + 1;
        vector<int> sorted(size, 0);
        while (i <= mid && j <= end)
            sorted[k++] = nums[i] < nums[j] ? nums[i++] : nums[j++];
        while (i <= mid)
            sorted[k++] = nums[i++];
        while (j <= end)
            sorted[k++] = nums[j++];
        for (int s=0; s < size; s++)
            nums[start+s] = sorted[s];
    }
    void mergeSort(vector<int>& nums, int start, int end){
        if (end <= start) return;
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