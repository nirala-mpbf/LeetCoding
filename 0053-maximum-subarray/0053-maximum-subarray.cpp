class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       
        int n=arr.size();
        long long mx=INT_MIN;
        long long sm=0;
        for(int i=0; i<n; i++){
            sm +=arr[i];
            mx=max(mx,sm);

            if(sm<0){
               sm=0;
            }
        }
       return mx;
    }
};