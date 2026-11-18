class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<int>>>visited(m,vector<vector<int>>(n,vector<int>(k+1,0)));

        queue<tuple<int,int,int>>q;

        q.push({0,0,k});

        visited[0][0][k]=1;

        int steps =0;

        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};

        while(!q.empty()){
           
            int size = q.size();

            while(size--){
                 auto[r,c,rem]=q.front();
                 q.pop();

                if(r==m-1 and c == n-1){
                    return steps;
                }

                for(int i =0;i<4;i++){
                    int nr = r+dr[i];
                    int nc = c+dc[i];

                    if(nr>=0 and nr<m and nc>=0 and nc<n){
                        int newk = rem;
                        if(grid[nr][nc]==1){
                            newk--;
                        }
                        if(newk<0){
                            continue;
                        }

                        if(visited[nr][nc][newk]==0){
                            visited[nr][nc][newk]=1;
                            q.push({nr,nc,newk});
                        }
                    }
                }
            }
            steps++;
        }
        return -1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna