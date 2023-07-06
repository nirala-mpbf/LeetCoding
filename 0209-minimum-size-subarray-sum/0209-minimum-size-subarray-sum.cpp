class Solution {
public:

    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size(), i=0, j=0;
        int ans=INT_MAX, sm=0;
        
        while(j<n){
            sm += nums[j++];
           
            while(sm>=target){
                    ans=min(ans,j-i);
                    sm -= nums[i];
                    i++;
            }
        }
    
        return ans==INT_MAX ? 0 : ans;
    }
};