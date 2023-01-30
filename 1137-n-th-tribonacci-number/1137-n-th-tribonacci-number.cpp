class Solution {
public:
    
    /*
    //DP solution
    
        int f(int n , vector<int> &dp){
        
            if( n==0 ) return 0;
            if( n==1 || n==2) return 1;


            if(dp[n]!=-1)
                return dp[n];
            else
                return dp[n]=f(n-1 , dp ) + f(n-2 , dp ) + f(n-3 , dp );   
        }

        int tribonacci(int n) {

            vector<int> F(38 ,-1);

            F[0]=0 , F[1]=1 , F[2]=1;

            f(n , F);
            return F[n];

        }
    */
    
    
    
    // T--> O(n)
    
    int tribonacci(int n) {
        
        int dp[3]={0,1,1};
        
        for(int i=3; i<=n;i++){
            dp[i%3]= dp[0]+dp[1]+dp[2];
        }
        return dp[n%3]; 
    }
    
};