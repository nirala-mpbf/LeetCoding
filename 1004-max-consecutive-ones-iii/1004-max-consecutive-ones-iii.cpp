class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        int i=0; 
        int j=0;
        int cnt_0=0;
        int ans=0;
        
        while(j<n){
            
            if(nums[j]==0)
                cnt_0++;
            
            if(cnt_0 > k){
                while(cnt_0 > k){
                    if(nums[i]==0){
                        cnt_0--;
                    }
                    i++;
                }
            }

            j++;
            int len= j-i+1;
            ans=max(ans , len);
            
        }
        return ans-1;
        
    }
    
};