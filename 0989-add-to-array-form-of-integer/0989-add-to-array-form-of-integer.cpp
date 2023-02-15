class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        for(int i=num.size()-1; (i>=0 and k>0); i--){
            num[i] += k;
            k= num[i]/10;
            num[i]=num[i]%10;
        }

/*
//Method 1:

        if(k==0){
            return num;
        }
        
        vector<int> ans;
        while(k!=0){
            ans.push_back(k%10);
            k=k/10;
        }
        reverse(ans.begin(),ans.end());
        
        for(auto &x:num){
            ans.push_back(x);
        }
        return ans;
*/
    
// method2:
        while(k!=0){
            //insering in begin of num
            num.insert(num.begin() , k%10);
            k=k/10;
        }
        
        return num;
    }
};