class Solution {
public:
    
    vector<int> getRow(int row) {
   
        vector<int> ansRow;
        ansRow.push_back(1);

        long long res=1;
        for(int i=1; i<row; i++){
            res *= (row-i);
            res /= i;
            ansRow.push_back(res);
        }
        return ansRow;
    }
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        
        for(int row=1; row<=n; row++){
            ans.push_back(getRow(row));
        }
        return ans;
    }
};