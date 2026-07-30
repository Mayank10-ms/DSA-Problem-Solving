class Solution {
public:
    int ans = 0;
    int total = 0;

    void dfs(vector<vector<int>>& grid, int x, int y, int cnt) {
        int m = grid.size(), n = grid[0].size();

        if (x < 0 || y < 0 || x >= m || y >= n || grid[x][y] == -1)
            return;

        if (grid[x][y] == 2) {
            if (cnt == total)
                ans++;
            return;
        }

        int temp = grid[x][y];
        grid[x][y] = -1;   // mark visited

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        for (int k = 0; k < 4; k++)
            dfs(grid, x + dx[k], y + dy[k], cnt + 1);

        grid[x][y] = temp; // backtrack
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx, sy;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != -1)
                    total++;
                if (grid[i][j] == 1) {
                    sx = i;
                    sy = j;
                }
            }
        }

        dfs(grid, sx, sy, 1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna