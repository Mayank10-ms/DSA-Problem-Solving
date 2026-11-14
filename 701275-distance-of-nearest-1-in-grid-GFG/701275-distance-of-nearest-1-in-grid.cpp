class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<vector<int>>dist(rows,vector<int>(cols,-1));
        
        queue<pair<int,int>>q;
        
        for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(grid[r][c]==1){
                    dist[r][c]=0;
                    q.push({r,c});
                }
            }
        }
        
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        
        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();
            
            for(int k=0;k<4;k++){
            int nr = r + dr[k];
            int nc = c + dc[k];
            
            if(nr>=0 and nr<rows and nc>=0 and nc<cols and dist[nr][nc]==-1){
                 dist[nr][nc]=dist[r][c]+1;
                 q.push({nr,nc});
            }
        }
     }
     return dist;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna