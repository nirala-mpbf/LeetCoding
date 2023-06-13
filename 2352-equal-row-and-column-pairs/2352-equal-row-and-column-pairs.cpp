class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<vector<int>> g;
        
        for(int j=0; j<n; j++){
            vector<int> v;
            for(int i=0; i<n; i++){
                v.push_back(grid[i][j]);
            }
            g.push_back(v);
        }
        
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i]==g[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};