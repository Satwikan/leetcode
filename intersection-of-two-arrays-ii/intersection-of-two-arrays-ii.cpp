class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> u1;
        unordered_map<int, int> u2;
        cout << "u1: "; 
        for(int i: nums1){
            if (u1.find(i) != u1.end()) u1[i] += 1;
            else {
                u1[i] = 1;
                cout << i << " ";
            }
        }
        cout << endl << "u2: ";
        for(int i: nums2){
            if (u2.find(i) != u2.end()) u2[i] += 1;
            else {
                u2[i] = 1;
                cout << i << " ";
            }
        }
        cout << endl << "merge\n";
        for(auto x: u1) {
            if (u2.find(x.first) != u2.end()){
                // if key exists in u2
                u1[x.first] = min(u1[x.first], u2[x.first]);
                cout << x.first << " " << u1[x.first] << endl;
                for (int i = 0; i < u1[x.first]; i++) {
                    res.push_back(x.first);
                }
            }
            // else {
            //     u1[x.first] = 0;
            // }
        }
        return res;
    }
};