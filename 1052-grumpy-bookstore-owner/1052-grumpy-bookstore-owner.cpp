class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int n=customers.size(), directlySatisfied = 0;
      
        for(int i=0; i<n; i++){
            if(grumpy[i]==0){
                directlySatisfied += customers[i];
                customers[i]=0;
            }
        }
        
        vector<int> prefSum(n,0);
        prefSum[0]=customers[0];

        for(int i=1; i<n; i++){
            prefSum[i] += prefSum[i-1] + customers[i];
        }
        
        
        int mx=INT_MIN;
        int i=0, j=minutes-1;
        
        while(j<n){
            int curr = prefSum[j] - ( i>0 ? prefSum[i-1] : 0);
            // cout<<curr;
            mx = max(mx,curr);
            j++;
            i++;
            
        }
    
        if(mx == INT_MAX){
           mx=0;
        }
        return directlySatisfied + mx;
        
        
    }
    
    
};