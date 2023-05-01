class Solution {
public:
    double average(vector<int>& salary) {
        
        double ans=0;
        int mn=INT_MAX,mx=INT_MIN,n=salary.size();
        
        for(auto &x: salary){
            ans+=x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        
        ans=ans-mn-mx;
    
        ans=ans/(n-2);
        return ans;
    }
    
};