class Solution {
public:
    
    void dfs(int cur, vector<int> adj[], vector<bool> &vis, int &cnt){
        vis[cur]=true;
        cnt++;
        
        for(auto it: adj[cur]){
            if(!vis[it]){
                dfs(it,adj,vis,cnt);
            }
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        vector<int> adj[n];
        for(auto e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> vis(n,false);
        vector<long long> res;
        
        for(int i=0; i<n; i++){
            if(!vis[i]){
                
                int cnt=0;
                dfs(i, adj, vis, cnt);
                res.push_back(cnt);
            }
        }
        
        int k=res.size();
        
        if(k==1) return 0;
        
        vector<long long> suff(k, 1);
        suff[k-1]=res[k-1];
        
        for(int i=k-2; i>=0; i--){
            suff[i]= res[i]+suff[i+1];
        }
        
        long long ans=0;
        for(int i=0; i<k-1; i++){
            ans += (res[i]*suff[i+1]);
        }
        return ans;
        
    }
};
