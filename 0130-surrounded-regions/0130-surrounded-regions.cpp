class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        queue<pair<int,int>>q;

        int dr[] ={-1,1,0,0};
        int dc[]={0,0,-1,1};

        for(int c =0;c<cols;c++){
            if(board[0][c]=='O'){
                board[0][c]='#';
                q.push({0,c});
            }
        }
         for(int c =0;c<cols;c++){
            if(board[rows-1][c]=='O'){
                board[rows-1][c]='#';
                q.push({rows-1,c});
            }
        }

         for(int r =0;r<rows;r++){
            if(board[r][0]=='O'){
                board[r][0]='#';
                q.push({r,0});
            }
        }

         for(int r =0;r<rows;r++){
            if(board[r][cols-1]=='O'){
                board[r][cols-1]='#';
                q.push({r,cols-1});
            }
        }

        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();

            for(int k =0;k<4;k++){
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr>=0 and nr<rows and nc>=0 and nc<cols and board[nr][nc]=='O'){
                    board[nr][nc]='#';
                    q.push({nr,nc});
                }
            }
       }
       for(int r=0;r<rows;r++){
           for(int c =0;c<cols;c++){
                if(board[r][c]=='O'){
                board[r][c]='X';
               }
            else if ( board[r][c]=='#'){
                board[r][c]='O';
               }
           }
       }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna