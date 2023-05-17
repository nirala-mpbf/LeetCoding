class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int ind=-1;
        
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            // return the first that is (smallest permutation)
            reverse(nums.begin() , nums.end());
            return;
        }

        for(int i=n-1; i>=0; i--){
            if(nums[ind] < nums[i]){
                swap(nums[ind],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+ind+1 , nums.end());
       
    }
};