class Solution {
public:
    
    void dfs(int i, int vis[], vector<int> adjList[]){
        vis[i]=1;
        for(auto adj: adjList[i]){
            if(!vis[adj]){
                 dfs(adj,vis,adjList);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        vector<int> adjList[n+1];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1){
                    adjList[i+1].push_back(j+1);
                    adjList[j+1].push_back(i+1);
                }
            }
        }
        
        int vis[n+1];
        memset(vis,0,sizeof(vis));
        
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adjList);
            }
        }
        
        return cnt;
    }
};