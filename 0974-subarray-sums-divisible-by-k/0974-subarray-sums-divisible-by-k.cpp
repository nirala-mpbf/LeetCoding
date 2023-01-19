class Solution {
public:
    
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        
        int prefSm=0;
        int cnt=0;
        mp[0]=1;
        
        
        for(int i=0; i<nums.size(); i++){
            prefSm += nums[i];
            
            int rem = prefSm % k;
            
            if(rem<0){ //to make it positive
                rem +=k;
                rem = rem % k;
            }
            if(mp[rem]){
                cnt += mp[rem];
                mp[rem] +=1;
            }
            else{
                mp[rem]+=1;
            }
        }
        return cnt;
        
    }
    
};