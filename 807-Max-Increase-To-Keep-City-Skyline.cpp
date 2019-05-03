class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        vector<vector<int>> max (100, vector<int>(100));
        int res = 0;
        
        for(int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] > max[0][i]) max[0][i] = grid[i][j];
                if (gird[i][j] > max[1][j]) max[1][j] = grid[i][j];
            }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                res += (max[0][i] < max[1][j]) ? max[0][i] - grid[i][j] : max[1][j] - grid[i][j];
            }
        }

        return res;
              
    }
};