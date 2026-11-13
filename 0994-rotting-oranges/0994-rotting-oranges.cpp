class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        if(grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int,int>>q;

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        int fresh = 0;

        for(int r = 0;r<rows;r++){
            for(int c =0;c<cols;c++){
                if(grid[r][c]==2){
                    q.push({r,c});
                }
               
                if(grid[r][c]==1){
                    fresh++;
                }
            }
        }
        
        if(fresh==0) return 0;
        int minutes = 0;

        while(!q.empty()){
            int size = q.size();
            bool rotten = false;
            for(int i =0;i<size;i++){
                auto[r,c]=q.front();
                q.pop();
            

            for(int d =0;d<4;d++){
                int nr = r + dr[d];
                int nc = c + dc[d];

                if(nr>=0 and nr<rows and nc>=0 and nc<cols and grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    fresh--;
                    rotten=true;
                    q.push({nr,nc});
                }
            }
        } 
            if(rotten == true)  minutes++;
    }
        if(fresh>0) return -1;
         return minutes;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna