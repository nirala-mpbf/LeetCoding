class Solution {
    public void setZeroes(int[][] matrix) {   /*MS*/
        int n=matrix.length;
        int m=matrix[0].length;
        
        int temp[][] = new int[n][m];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                temp[i][j]=matrix[i][j];
            }
        }
    
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    
                    // making all elements of that row as 0
                    for(int k=0; k<m; k++){
                        temp[i][k]=0;
                    }
                    
                    // making all elements of that row as 0
                    for(int k=0; k<n; k++){
                        temp[k][j]=0;
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j]=temp[i][j];
            }
        }
        
        
        
    }
}