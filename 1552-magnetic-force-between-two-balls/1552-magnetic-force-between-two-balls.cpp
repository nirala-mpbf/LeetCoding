class Solution {

private:
    int countDistribution(int mid, vector<int> &pos){
        
        int d = pos[0], cnt=1;
        for(int i=1; i<pos.size(); i++){
            // cout<<pos[i]-d  << " ";
            if(pos[i]-d >= mid){
                d=pos[i];
                cnt++;
            }
            
        }
        // cout<<cnt<<"cntDone";
        return cnt;
    }
    
    
public:
    int maxDistance(vector<int>& position, int m) {
        
        sort(begin(position), end(position));
        
        int mx=position[0];
        for(auto &x: position){
            mx = max(mx, x);
        }
        
        int st=1, end=mx;
        int ans=0;
        
        while(st<=end){
            
            int  mid  = st + (end-st)/2;
            
            if( countDistribution(mid, position) >= m){
                ans= mid;
                st=mid+1;
                // cout<<"ans "<<ans<<" ";
            }
            else{
                end = mid-1;
            }
        }
        return ans;
        
    }
};