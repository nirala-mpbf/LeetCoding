class Solution {
public:
    
    int At_Most_K_Flip(char ch, string s, int k){
        int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        
        int cnt_flip=0;
        
        while(j<n){
            
            if(s[j]==ch)
                cnt_flip++;
            
            if(cnt_flip > k)
            {
                while(i<j && cnt_flip > k)
                {
                    if(s[i]==ch)
                        cnt_flip--;
                    i++;
                }
            }
            
            int len=j-i+1;
            ans=max(ans,len);
            j++;
            
        }
        return ans;
    }
    int maxConsecutiveAnswers(string s, int k) {
        
      
        int cnt1 = At_Most_K_Flip('F' , s, k);
        int cnt2 = At_Most_K_Flip('T' , s, k);
        
        // cout<<cnt1<<" "<<cnt2<<"\n";
        return max(cnt1,cnt2);
    }
};