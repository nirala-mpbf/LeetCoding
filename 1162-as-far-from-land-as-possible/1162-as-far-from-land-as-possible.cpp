class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                }
            }
        }

        int dist=-1;
         vector<pair<int,int>> dir= {{0,1}, {1,0}, {0,-1}, {-1,0}};
        if(q.empty() || q.size()==n*n){
            return -1;
        }

        while(!q.empty()){
            int size= q.size();

            while(size){

                int temp_i= q.front().first;
                int temp_j = q.front().second;
                q.pop();
                for(auto &it:dir){

                    int new_i = temp_i + it.first;
                    int new_j = temp_j + it.second;

                    if(new_i>=0 && new_i < n && new_j>=0 && new_j<n && grid[new_i][new_j] == 0){
                        grid[new_i][new_j]=1;
                        q.push({new_i, new_j});
                    }
                }

                size--;
            }

            dist++;
        }

        return dist;
    }
};