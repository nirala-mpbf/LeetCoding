class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
	    
	    queue< pair<pair<int,int> , int>> q;
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(matrix[i][j]==0)
	            {
	                q.push( { {i,j}, 0});
	                vis[i][j]=1;
	                ans[i][j]=0;
	                
	            }
	        }
	    }
	    
	    int dr[]={-1,0,1,0};
	    int dc[]={0,1,0,-1};
	    
	    while(!q.empty()){
	        
	        int size=q.size();
	        while(size--){
	            
	            int r=q.front().first.first;
	            int c=q.front().first.second;
	            int step=q.front().second;
	             q.pop();
	            
	            for(int i=0; i<4; i++){
	                int nr=r+dr[i];
	                int nc=c+dc[i];
	                
	                if(nr>=0 and nc>=0 and nr<n and nc<m 
	                && !vis[nr][nc])
	                {
	                    q.push({{nr,nc},step+1});
	                    vis[nr][nc]=1;
	                    ans[nr][nc]=step+1;
	                }
	            }
	        }
	    }
        return ans;
    }
};