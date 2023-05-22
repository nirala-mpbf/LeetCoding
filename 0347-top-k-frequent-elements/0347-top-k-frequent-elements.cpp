class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        vector<pair<int,int>> vp;
        unordered_map<int,int> mp;
        
        for(auto &x: nums){
            mp[x]++;
        }
        
        for(auto [x,y]: mp){
            vp.push_back({y,x});
        }
        sort(begin(vp), end(vp));

        for(int i=vp.size()-1; i>=0 and k>0; i-- , k--){
            
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};