class Solution {
public:
    bool isValid(int r,int c,vector<vector<int>>& grid,int m,int n)
    {
        if(r<0 || r>=m || c<0 || c>=n || grid[r][c]==1)
            return false;
        return true;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        if(grid[0][0]==1 || grid[m-1][n-1]==1)
            return -1;

        vector<vector<int>> dirs = { {-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1} };
        
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        
        int ans=0;
        
        while(!q.empty())
        {
            int ls=q.size(); //  level size--> means number of element at this level
            ans++;
            
            for(int i=0; i<ls; i++){
                
                pair<int,int>p=q.front();
                q.pop();
                
                if(p.first==m-1 && p.second==n-1){
                  return ans;  
                }
                
                for(int j=0; j<dirs.size(); j++){
                    int r=p.first+dirs[j][0];
                    int c=p.second+dirs[j][1];

                    if(isValid(r,c,grid,m,n)){
                        q.push({r,c});
                        grid[r][c]=1;
                    }    
                }  
            }
        }
        return -1;
    }
    
};