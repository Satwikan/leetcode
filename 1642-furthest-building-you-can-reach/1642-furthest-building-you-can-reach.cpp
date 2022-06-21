class Solution {
public:
    int furthestBuilding(vector<int>& H, int bricks, int ladders) {
	map<int, short> mp;
	int n = size(H), i = 0, jumpHeight = 0;
	for(; i < n - 1; i++) {
		jumpHeight = H[i + 1] - H[i];
		if(jumpHeight <= 0) continue;
		mp[jumpHeight]++;
		if(ladders--<=0){                
			bricks -= begin(mp) -> first;
			if(!--begin(mp) -> second) 
				mp.erase(begin(mp));
		}
		if(bricks < 0) return i;
	}
	return i;
}
};