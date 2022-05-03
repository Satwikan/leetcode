class Solution {
public:
 bool check(int i,int j,vector<vector<int>> &vec){
        if(vec[i][j]==0 || vec[i][j]==1) return false;
        return true;
    }
    
    
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        //Wall=0, Guard=1, Red=2, Green=3 
        vector<vector<int>> vec (m,vector<int>(n,3)); //grid with all green visit
        
        //fill the wall and Guard in grid 
        for(int i=0;i<g.size();i++) vec[g[i][0]][g[i][1]]=1;
        for(int i=0;i<w.size();i++) vec[w[i][0]][w[i][1]]=0;
        
        //visit all cell
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]==1){       //consider each Guard
                    for(int up=i-1;up>=0;up--){  // check vertically up column
                        if(!check(up,j,vec))break;
                        vec[up][j]=2;
                    }
                    for(int down=i+1;down<m;down++){ // check vertically down column
                        if(!check(down,j,vec))break;
                        vec[down][j]=2;
                    }
                    for(int left=j-1;left>=0;left--){  // check horizontally left row
                        if(!check(i,left,vec))break;
                        vec[i][left]=2;
                    }
                    for(int rt=j+1;rt<n;rt++){   // check horizontally right row
                        if(!check(i,rt,vec))break;
                        vec[i][rt]=2;
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]==3) cnt++;  // Count Green region
            }
        }
        return cnt;
    }
};