class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        queue<int>q;
        vector<vector<int>>adj(n+1);
        for(auto &d : dislikes){
            int u = d[0];
            int v = d[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>color(n+1,-1);
        for(int i =1;i<=n;i++){
            if(color[i]==-1){
                color[i]=0;
                q.push(i);
            
            while(!q.empty()){
                int node = q.front();
                q.pop();

                for(int neighbour : adj[node]){
                    if(color[neighbour]==-1){
                    color[neighbour]=1-color[node];
                    q.push(neighbour);
                  }
                else if(color[neighbour]==color[node]){
                    return false;
                  }
                }
              }
           }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna