class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // find in between of elements in array
        int n = nums.size();
        // if (nums.size() == 1 && nums[0] == target) return {0, 0};
        int start = 0, end = nums.size()-1;
        while (end >= start) {
            int mid = start+(end-start)/2;
            if (target > nums[mid]) start = mid+1;
            else if (target < nums[mid]) end = mid-1;
            else {
                int s = mid;
                int e = mid;
                while (s >= 0 && nums[s] == target) s--;
                while (e < n && nums[e] == target) e++;
                return {s+1, e-1};
            }
        }
        return {-1, -1};
    }
};