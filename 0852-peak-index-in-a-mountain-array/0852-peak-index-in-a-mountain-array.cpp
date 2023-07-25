class Solution {
public:
    
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n=arr.size(), st=0, en=n-1 , mid; 
        
        while(st<en){
            mid= st + (en - st)/2;
            
            if( arr[mid] < arr[mid+1]){
                st=mid+1;
            }
            else{
                en=mid;
            }
        }
        return st;
        
    }
};