class Solution {
public:
    int findMaximizedCapital(int K, int W, vector<int>& Profits, vector<int>& Capital) {
        
        priority_queue<int> pq; 
        vector<pair<int,int>> vp; // to store index of projects
        
        for(int i=0; i<Capital.size(); i++){
            vp.push_back({Capital[i],i});
        }
        sort(vp.begin(),vp.end());
        
        int ans = W;
        int j = 0;
        
        while(K--){
        
            while(j<Capital.size() && vp[j].first<=W)
            {
                pq.push(Profits[vp[j].second]);// push all profits for which capital<=W
                j++;
            }
            
            if(!pq.empty())
            {
                ans+=pq.top();// take the max profit among them
                W = W+pq.top();// make new capital
                pq.pop();
            }
        }
        return ans;
 
    }
};