class Solution {
private:
    int solve(int a, int b){
        return (b-a)/2;
    }
    
public:
    int countOdds(int a, int b) {
        
        
        if(a%2==0 && b%2==0) return solve(a,b);
        else if(a%2==1 && b%2==1) return 2+solve(a+1,b-1);
        else if(a%2==0 && b%2==1) return 1+solve(a,b-1);
        else if(a%2==1 && b%2==0) return 1+solve(a+1,b);
        else return -14434444;
        
    }

};