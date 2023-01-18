class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
   
  // This is our own method
  // Algo:
  // Find the minimum subarray sum using kadane then substract it from total sum      
        
        int minSm=INT_MAX;
        int curSm=0;
        
        int totalSm=0;
        
//total sum      
        for(auto x: nums) 
            totalSm +=x;
        
// minimum subarray sum
        for(auto x: nums){
           
            curSm += x;
            minSm = min(minSm , curSm);
            
            if(curSm >= 0)
                curSm=0;
        }
        
        
// maximum subarray sum
        int maxSm=INT_MIN;
        curSm=0;
        
        for(auto x: nums){
           
            curSm += x;
            maxSm = max(maxSm , curSm);
            
            if(curSm < 0)
                curSm=0;
        }     
        
        if(maxSm < 0)
            return maxSm;
        return max(maxSm, totalSm-minSm);
        
        
    }
};