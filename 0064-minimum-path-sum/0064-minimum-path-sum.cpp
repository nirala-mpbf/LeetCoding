class Solution {
public:
//      int minPathSum(vector<vector<int>>& grid) {
//         // Dijkstra's Institution

//         int n = grid.size();
//         int m = grid[0].size();

//         vector<vector<int>>dist(n,vector<int>(m,INT_MAX));

//         priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
//         dist[0][0] = grid[0][0];
//         pq.push({grid[0][0],{0,0}});
      
//         int dr[] = {0,1};
//         int dc[] = {1,0};
         
//         while(!pq.empty()){
            
//             int distsofar = pq.top().first;
//             int r = pq.top().second.first;
//             int c = pq.top().second.second;
//             pq.pop();
            
//             for(int i = 0 ; i<2 ; i++){
               
//                 int nr = r + dr[i];
//                 int nc = c + dc[i];
                
//                 if(nr>=0 && nc>=0 && nr<n && nc<m){
                    
//                     if(dist[nr][nc] > (distsofar + grid[nr][nc]))
//                     {
//                         dist[nr][nc] = (distsofar + grid[nr][nc]);
//                         pq.push({dist[nr][nc] , {nr,nc}});
//                     }

//                 }
//             }
//         }
      
//         int ans = dist[n-1][m-1];
//         return ans;
      
        
//     }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size(); 
        
        vector<vector<int> > sum(m, vector<int>(n, grid[0][0]));
        for (int i = 1; i < m; i++)
            sum[i][0] = sum[i - 1][0] + grid[i][0];
        
        for (int j = 1; j < n; j++)
            sum[0][j] = sum[0][j - 1] + grid[0][j];
        
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                sum[i][j]  = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
        return sum[m - 1][n - 1];
    }
};