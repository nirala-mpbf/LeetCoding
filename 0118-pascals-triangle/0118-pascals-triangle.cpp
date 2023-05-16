class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        
        for(int i=1; i<n; i++){
            
            vector<int> prev = ans.back();
            vector<int> curr;
            
            for(int j=0; j<=i; j++){
                int res=0;
                
                if(j-1>=0) res+= prev[j-1];
                if(j<prev.size()) res += prev[j];
                curr.push_back(res);
            }
            ans.push_back(curr);
        }
        return ans;
    }
};