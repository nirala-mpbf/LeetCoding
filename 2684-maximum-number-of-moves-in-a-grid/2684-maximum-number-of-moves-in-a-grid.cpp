class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> v(n, vector<int>(m,-1));
        
        for(int i=0; i<n; i++){
            v[i][0]=1;
        }
        
        
        
        for(int j=1; j<m; j++){
            for(int i=0; i<n; i++){
                
                if(v[i][j-1]!=-1 and grid[i][j-1]<grid[i][j]){
                    v[i][j] = max(v[i][j], v[i][j-1] +1);
                }
                
                if( i-1>=0 and v[i-1][j-1]!=-1 and grid[i-1][j-1]<grid[i][j]){
                    v[i][j] = max(v[i][j], v[i-1][j-1] +1);
                }
                
                if(i+1<n and j-1>=0 and v[i+1][j-1]!=-1 and grid[i+1][j-1]<grid[i][j]){
                    v[i][j] = max(v[i][j], v[i+1][j-1] +1);
                }
                
            }
        }  
        
        int ans=0;
       
        for(auto c: v){
            for(auto p: c){
                ans=max(ans,p);
                // cout<<p<<" ";
            }
            // cout<<"\n";
        }
        
        
        return ans-1>0 ? ans-1: 0;

    }
};