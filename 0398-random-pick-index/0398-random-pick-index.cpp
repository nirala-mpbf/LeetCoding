class Solution {
public:
    
    map<int,vector<int>> mp;
    
    Solution(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].emplace_back(i);
        }
    }
    
    int pick(int target) {
    
        auto it = mp.find(target);
        
//         if(it!=mp.end())
        
        auto y=it->second;
        
        int sz = y.size();
        return y[rand()%sz];
        
      
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */