class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0 , j=0;
        int n=w1.size();
        int m=w2.size();
        
        string ans;
        
        while(i<n || j<m){
            if(i<n) ans += w1[i++];
            if(j<m) ans += w2[j++];
        }
        
        
        return ans;
    }
};