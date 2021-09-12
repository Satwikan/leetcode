class Solution {
public:
    int binarySearch(vector<int>& arr, int l, int r, int x) {
        // cout << "\nl: " << arr[l] << ", r: " << r;
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // cout << ", mid: " << mid;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
    int pivotFinder(vector<int>& arr) {
        int right = arr.size() - 1;
        int left = 0, mid;
        while(left < right){
            mid = (left + right)/2;
            cout << arr[left] << " " << arr[mid] << " " << arr[right] << endl;
            if (mid < right && arr[mid] > arr[mid + 1]) return mid;
            if (mid > left && arr[mid] < arr[mid - 1]){
                return (mid - 1);
            } else if (arr[left] >= arr[mid]) {
                cout << "right = mid - 1\n";
                right = mid - 1;
            } else {
                cout << "left = mid + 1\n";
                left = mid + 1;
            }
        }
        if (right == left) return left;
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() < 1) return -1;
        if (nums.size() < 4) {
            for (int k = 0; k < nums.size(); k++) if (nums[k] == target) return k;
            return -1;
        }
        int pivot = pivotFinder(nums);
        cout << "pivot: " << pivot;
        if (pivot == -1) return binarySearch(nums, 0, nums.size()-1, target);
        pivot = pivot + 1;
        int right = pivot - 1, left = 0;
        int index = binarySearch(nums, left, right, target);
        if (index != -1) return index;
        right = nums.size() - 1;
        left = pivot;
        index = binarySearch(nums, left, right, target);
        return index;
    }
};