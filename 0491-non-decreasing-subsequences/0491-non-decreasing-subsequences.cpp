class Solution {
public:

    void generate(int i, vector<int>& nums, vector<int>&sub, set<vector<int>>&subsets){
        if(i==nums.size())
        {
            if(sub.size()>=2){
                int x=sub[0];
                for(int j=1; j<sub.size(); j++){
                    if(x <= sub[j]){
                        x=sub[j];
                        continue;
                    }
                    else{
                        return;
                    }
                }
                subsets.insert(sub);
            }

            return;
        }

        generate(i+1, nums,sub,subsets);

        sub.push_back(nums[i]);
        generate(i+1, nums,sub,subsets);
        sub.pop_back();

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {

        set<vector<int>> subsets;
        vector<int> subset;
        
        int i=0;
        generate(i,nums,subset,subsets);
        
        vector<vector<int>> ans;
        for(auto it: subsets){
            ans.push_back(it);
        }
        return ans;

    }
};