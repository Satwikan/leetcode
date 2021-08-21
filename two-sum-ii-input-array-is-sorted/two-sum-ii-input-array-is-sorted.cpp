class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        while (i < j){
            if (numbers[i] + numbers[j] > target) j--;
            if (numbers[i] + numbers[j] < target) i++;
            if (numbers[i] + numbers[j] == target) break;
        }
        vector<int> vect{i+1, j+1};
        cout << vect[0] << " " << vect[1] << endl;
        return vect;
    }
};