class Solution {
public:
    
    int count(int a ,  vector<int> &potions , long long succ){        
        int n=potions.size();
        int s=0 , e=n-1;
        
        int res=0;
        while(s<=e){
            int mid= s + (e-s)/2;
            
            if(potions[mid]*1LL*a >= succ){
                res=n-mid;
                e=mid-1;
            }else if(potions[mid]*1LL*a < succ){
                s=mid+1;
            }
        }
        return res;    
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int> ans;
        sort(potions.begin() , potions.end());
        
        for(int i=0; i<spells.size(); i++){
            
            ans.push_back( count(spells[i] , potions , success));
        }
        return ans;
        
    }
};