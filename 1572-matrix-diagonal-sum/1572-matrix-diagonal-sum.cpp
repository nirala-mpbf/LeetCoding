class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();
        
        int sm=0;
        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            
            if(i==j){
                sm += mat[i][j] + mat[i][n-1-j];
            }
        }
        
        if(n&1){
            sm -= mat[n/2][n/2];
        }
        return sm;
    }
};