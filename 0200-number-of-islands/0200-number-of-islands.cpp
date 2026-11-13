class Solution {
public:

    void bfs(vector<vector<char>> & grid,int r, int c, vector<vector<bool>>&visited){
        int rows = grid.size();
        int cols = grid[0].size();

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        queue<pair<int,int>>q;
         visited[r][c]=true;
         q.push({r,c});
        while(!q.empty()){
          int cr = q.front().first;
          int cc = q.front().second;
          q.pop();

          for(int k =0;k<4;k++){
            int nr = cr + dr[k];
            int nc = cc + dc[k];

            if(nr>=0 and nr<rows and nc>=0 and nc<cols and grid[nr][nc]=='1' and !visited[nr][nc]){
            visited[nr][nc]=true;
            q.push({nr,nc});
           }
         }

        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>>visited(rows,vector<bool>(cols,false));

        int count = 0;

        for(int r = 0;r<rows;r++){
            for(int c =0;c<cols;c++){
                if(grid[r][c]=='1' and !visited[r][c]){
                    count++;
                    bfs(grid,r,c,visited);
                }
            }
        }
        
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna