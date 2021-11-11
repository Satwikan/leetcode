class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            vector<int> v;
    int i=0,j=0;
    int l1=nums1.size(),l2=nums2.size();
    
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    
    while(i<l1 && j<l2)
    {
        if(nums1[i]==nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i]<nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    return v;
    
    }
};