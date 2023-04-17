class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int mx=0;
        for(auto x: candies){
            mx=max(mx,x);
        }
        vector<bool> ans;
        for(auto x: candies)
        {
            
            ans.push_back( (x + extraCandies >= mx));
        }
        return ans;
    }
};