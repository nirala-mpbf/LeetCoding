class Solution {
public:
    bool checkEqual( int hs1[] , int hs2[]){
        for(int i=0; i<26; i++){
            if(hs1[i] != hs2[i])
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        int windowSize=s1.size();
        int hs1[26]={0};
        for(int i=0; i<windowSize; i++){
            hs1[s1[i]-'a']++;
        }
        
        
        // now 
        
        int hs2[26]={0};
        
        int i=0;
        while(i<windowSize && i<s2.size()){
            hs2[s2[i]-'a']++;
            i++;
        }
        
        if(checkEqual(hs1 , hs2))
            return true;
    //nahi to next char ko window mw include karo and last char ko window se exclude kro
       
        while(i<s2.size()){
            
            int include=s2[i]-'a';  
            hs2[include]++;
            
            int exclude=s2[i-windowSize]-'a';
            hs2[exclude]--;
            
            if(checkEqual(hs1 , hs2))
                return true;
            i++;
        }
        
        return false;
        
    }
};