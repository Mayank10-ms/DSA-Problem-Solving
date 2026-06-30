class Solution {
public:
 void dfs(int i,int j,vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();

        grid[i][j]='0';

        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};

        for(int k=0;k<4;k++)
        {
            int nr=i+dr[k];
            int nc=j+dc[k];

            if(nr>=0 && nc>=0 &&
               nr<n && nc<m &&
               grid[nr][nc]=='1')
            {
                dfs(nr,nc,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i =0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
               if(grid[i][j]=='1'){
                count++;
                dfs(i,j,grid);
               }
            }
        }
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna