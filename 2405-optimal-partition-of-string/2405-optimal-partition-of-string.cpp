class Solution {
public:
    int partitionString(string s) {
        
        
        int mp[26]={0};
        vector<int> nw(26,0);
        int cnt=0;
        for(auto c: s){
            
            if(mp[c-'a']>0 ){
                memset(mp,0,sizeof(mp));
                cnt++;
                mp[c-'a']++;
            }else{
                mp[c-'a']++;
            }
        }
        return cnt+1;
    }
};