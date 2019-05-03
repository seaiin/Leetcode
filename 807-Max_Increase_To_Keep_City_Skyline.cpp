#include <algorithm>

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

        vector<int> max_row (vector<int>(100));
        vector<int> max_column (vector<int>(100));
        int res = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                max_row[i] = max(grid[i][j], max_row[i]);
                max_column[j] = max(grid[i][j], max_column[j]);
            }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                res += (max_row[i] < max_column[j]) ? max_row[i] - grid[i][j] : max_column[j] - grid[i][j];
            }
        }

        return res;
              
    }
};