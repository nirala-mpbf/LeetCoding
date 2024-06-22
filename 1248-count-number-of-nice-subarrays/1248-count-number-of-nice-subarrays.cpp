class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n=nums.size(), i=0, j=0, ans=0, oddCnt=0, cntSubArray=0;
        
        while(j<n){
            
            if(nums[j]%2==1){
               
                oddCnt++;
              
                if(oddCnt>=k){

                    cntSubArray=1;
                    while(i<=j and nums[i]%2==0){
                        cntSubArray++;
                        i++;
                    }
                    i++;
                    ans += cntSubArray;

                }
            
            }
            else {
                if(oddCnt>=k){
                    ans += cntSubArray;
                }
            }
            
            j++;
            
        }
        return ans;
    }
    
    
    // 1  0 0 1 0 1 0 0 0 0 0 1 1 1

};