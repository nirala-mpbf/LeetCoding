class Solution {
public:
    
    unordered_map<int,vector<int>> adjList;
   
    vector<int> dfs(int node, int parent, string &labels, vector<int> &ans){
       
        vector<int> nodeFreq(26,0);
        nodeFreq[labels[node]-'a']++;
        
        for(auto adj: adjList[node]){
            
            if(adj != parent)
            {
                vector<int> child = dfs(adj,node,labels,ans);
                
                for(int i=0; i<26; i++){
                    nodeFreq[i] += child[i];
                }
            }
        }
        
        ans[node]= nodeFreq[labels[node]-'a'];
        return nodeFreq;
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        for(auto v: edges){
            adjList[v[0]].push_back(v[1]);
            adjList[v[1]].push_back(v[0]);
            
        }
        
        vector<int> ans(n,0);
        int root=0, parent=-1;
        
        dfs(root,parent,labels,ans);
        
        return ans;
    }
};