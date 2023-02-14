class Solution {
public:
    string addBinary(string a, string b) {
        
        int i=a.size()-1 , j=b.size()-1;
        
        int rem=0;
        string ans="";
        
        while(i>=0 && j>=0){
            
            int num1=a[i]-'0';
            int num2=b[j]-'0';
            
            int add=num1+num2+rem;
            rem= add/2;
            add=add%2;
            
            ans = to_string(add) + ans;
            
            i-- , j--;
            
        }
        while(i>=0){
            
            int num1=a[i]-'0';
            
            int add=num1 + rem;
            rem= add/2;
            add=add%2;
            
            ans = to_string(add) + ans;
            i--;
        }
        while(j>=0){
            
            int num1=b[j]-'0';
            
            int add=num1 + rem;
            rem= add/2;
            add=add%2;
            
            ans = to_string(add) + ans;
            j--;
        }
        
        if(rem > 0){
            ans = to_string(rem) + ans;
        }
        
        return ans;
        
    }
};