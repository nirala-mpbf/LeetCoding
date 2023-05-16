class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        int rowNumner= rowIndex +1;
        vector<int> ansRow;
        ansRow.push_back(1);

        long long res=1;
        for(int i=1; i<rowNumner; i++){
            res *= (rowNumner-i);
            res /= i;
            ansRow.push_back(res);
        }
        return ansRow;
    }
};