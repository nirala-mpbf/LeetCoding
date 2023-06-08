class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        
 
/*       
//Binary Search

        for (const vector<int>& row: grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
        
*/    
        
        
        // Search Break Points: O(m + n) - traverse from upper right to lower left
        int n=grid.size(), m=grid[0].size(), i=0, j=m-1;
        
        while(i<n) 
        {
            while(j>=0 && grid[i][j]<0){
                j--;
            }
            
            ans +=(m-j-1);
            i++;
        }
        return ans;
    }
};

//  [1,-1],
//  [-1,-1]
 

// [4, 3,2,-1]
// [3, 2,1,-1]
// [1, 1,-1,-2]
// [-1,-1,-2,-3]
