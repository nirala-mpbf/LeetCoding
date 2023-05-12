class Solution {
public:
    
   
    void solve(int i, long long &ans, long long cs, vector<vector<int>> &questions, vector<long long> &dp){
        
        if(i>=questions.size()){
            ans=max(ans,cs);
            return;
        }
        
        if(dp[i]>0){
            ans= max(ans, cs+dp[i]);
            return;
        }
        
        solve(i+1, ans, cs, questions,dp);
        
        cs += questions[i][0];
        solve(i+questions[i][1]+1, ans,cs,questions,dp);
        cs -= questions[i][0];
        
        dp[i]=ans;
        
    }
    
    long long mostPoints(vector<vector<int>>& questions) {
        long long ans=0 , cs=0,n=questions.size();
        vector<long long> dp(n,0);
        
        solve(0,ans,cs,questions,dp);
        return ans;
    }
};