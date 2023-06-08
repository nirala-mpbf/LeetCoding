class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
    /*
        int n=nums.size();
        int i=0 , j=1;
        
        while(i<j and j<n){
            
            if(nums[i]!=0){
                i++;
                j++;
                continue;
            }
            else{
                
                while(j<n and nums[j]==0){
                    j++;
                }
                
                if(j==n){
                    return;
                }
                else{
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
            }
    */
        
        int j=0;
        
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        
        for(;j < nums.size(); j++) {
            nums[j] = 0;
        }
        

    }
};