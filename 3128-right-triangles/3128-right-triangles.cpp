class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
         int n = grid.size();
         int m = grid[0].size();
        vector<int>row, col;
        for(int i=0; i<grid.size(); i++){
            int cnt = 0;
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1) cnt++;
            }
            row.push_back(cnt);
        }

        // for each column keep track of total number of 1's
        for(int i=0; i<grid[0].size(); i++){
            int cnt = 0;
            for(int j=0; j<grid.size(); j++){
                if(grid[j][i] == 1) cnt++;
            }
            col.push_back(cnt);
        }
          long long ans =0;
         for(int i =0;i<n;i++){
             for(int j =0;j<m;j++){
                  if(grid[i][j]){
                      ans += (row[i]-1)*(col[j]-1);
}
}
}
    return ans;
    }
};