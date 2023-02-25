class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> mx(n,0) , mn(n,0);
       
        mn[0]=nums[0];
        mx[n-1]=nums[n-1];
        
        for(int i=1; i<n; i++){
            mn[i]= min(mn[i-1] , nums[i]);
        }
        for(int i=n-2; i>=0; i--){
            mx[i]=max(mx[i+1],nums[i]);
        }
        
        int diff=INT_MIN;
        for(int i=0; i<n; i++){
            diff = max((mx[i]-mn[i]) , diff);
        }
        return diff;
    }
};