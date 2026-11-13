class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>>distance(rows,vector<int>(cols,-1));

        queue<pair<int,int>>q;

        for(int r = 0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(mat[r][c]==0){
                    q.push({r,c});
                    distance[r][c]=0;
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();

            for(int k =0;k<4;k++){
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr>=0 && nr<rows && nc>=0 && nc<cols and distance[nr][nc]==-1){
                    
                    distance[nr][nc] = distance[r][c] + 1;
                    q.push({nr,nc});

                }
            }
        }
        return distance;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna