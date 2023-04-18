class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0 , j=0;
        int n=w1.size();
        int m=w2.size();
        
        string ans;
        int flag=1;
        
        while(i<n and j<m){
            if(flag){
                ans+=w1[i];
                flag=0;
                i++;
            }
            else{
                ans+=w2[j];
                flag=1;
                j++;
            }
        }
        
        while(i<n) ans += w1[i++];
        while(j<m) ans += w2[j++];
        return ans;
    }
};