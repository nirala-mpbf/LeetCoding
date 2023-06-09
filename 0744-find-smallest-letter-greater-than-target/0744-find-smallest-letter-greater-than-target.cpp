class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
//         auto it= upper_bound(letters.begin(),letters.end(),target);
        
//         if(it==letters.end())
//             return letters[0];
        
//         int i=it-letters.begin();
//         return letters[i];
        
        
        int n=letters.size();
        int s=0 , e=n-1;
        while(s<e){
            
            int mid= s + (e-s)/2;
            
            if(letters[mid] <= target){
                s=mid+1;
            }
            else {//if(letters[mid] < target)
                e=mid;
            }
        }
        
        return letters[e] > target ? letters[e]: letters[0];
        
    }
};