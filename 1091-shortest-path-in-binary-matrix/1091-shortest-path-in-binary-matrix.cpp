class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1)  return -1;

        queue<pair<int,int>>q;
        q.push({0,0});

        vector<vector<int>>distance(n,vector<int>(n,-1));

        distance[0][0]=1;

        int dr[]= {-1,1,0,0,-1,-1,1,1};
        int dc[]= {0,0,-1,1,-1,1,-1,1};

        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();

             if( r == n-1 and c == n-1){
             return distance[r][c];
             }

            for(int k =0;k<8;k++){
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr>=0 and nr<n and nc>=0 and nc<n and grid[nr][nc]== 0  and distance[nr][nc]==-1){
                    distance[nr][nc] = distance[r][c] + 1;
                    q.push({nr,nc});
                }
            }
            
        }
     
      return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna