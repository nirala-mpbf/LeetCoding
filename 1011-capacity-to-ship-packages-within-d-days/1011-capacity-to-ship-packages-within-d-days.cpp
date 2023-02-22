class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        
        int low= 0, high=0;
        for(auto w: weights) {
            low = max(low, w);
            high += w;
        }
        while(low < high) {
            int mid = (low + high)/2;
            int need = 1, cur = 0;
            
            for (int w: weights) {
                if (cur + w > mid) {
                    need += 1;
                    cur = 0;
                }
                cur += w;
            }
            
            if(need > D)
                low = mid +1;
            else 
                high = mid;
        }
        return low;
    }
};