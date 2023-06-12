class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        
        int i=0,j=1,n=size(nums);
        vector<string> ans;
        
        if(n==0){
            return ans;
        }
        
        while(j<n){
            if(nums[j]==nums[j-1]+1){
                j++;
                continue;
            }
            
            string str;
            if(nums[i]==nums[j-1]){
                str=to_string(nums[i]);
            }
            else{
                str = to_string(nums[i]) + "->" + to_string(nums[j-1]);
            }
            ans.push_back(str);
            i=j;
            j++;
            
        }
        
        
        string str="";
        if(nums[i]==nums[j-1]){
            str=to_string(nums[i]);
        }
        else{
            str = to_string(nums[i]) + "->" + to_string(nums[j-1]);
        }
        ans.push_back(str);
        
        return ans;
    }
};