class Solution {
private:
    void findCombinations(int i, vector<vector<int>>& res, vector<int>& ds, vector<int>& arr, int target)
    {
        if( arr.size() == i)
        {   
            if(target == 0)
            res.push_back(ds);   
            return;
        }
        if(arr[i] <= target)
        {
            ds.push_back(arr[i]);
            findCombinations(i,res,ds,arr,target-arr[i]);
            ds.pop_back();
        }
        findCombinations(i+1,res,ds,arr,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        findCombinations(0,res,ds,candidates,target);
        cout << ds.size();
        return res;
    }
};