double average(int* salary, int salarySize){
    
        double ans=0;
        int mn=INT_MAX,mx=INT_MIN,n=salarySize;
        
        for(int i=0; i<salarySize; i++){
            int x=salary[i];
            
            ans+=x;
            mn=fmin(mn,x);
            mx=fmax(mx,x);
        }
        
        ans=ans-mn-mx;
    
        ans=ans/(n-2);
        return ans;
}