class Solution {
public:
    bool checkEqaual(int count1[] , int count2[]){
        for(int i=0; i<26; i++){
            if(count1[i] != count2[i])
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        
        int ws=p.size();
        int count1[26]={0};
        
        for(int i=0; i<ws; i++){
            count1[p[i]-'a']++;
        }
        
        int count2[26]={0};
        int i=0; 
        
        while(i<s.size() && i<ws){
            count2[s[i]-'a']++;
            i++;
        }
        
        if(checkEqaual(count1 , count2))
            ans.push_back(0);
        
        while(i<s.size()){
            
            int addIndex=s[i]-'a';
            count2[addIndex]++;
            
            int removeIndex=s[i-ws]-'a';
            count2[removeIndex]--;
            
            if(checkEqaual(count1 , count2))
                ans.push_back(i-ws+1);
            
            i++;
        }
        
        return ans;
            
            
    }
};