class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);

        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);        
            adj[v].push_back(u);        
        }

        queue<int>q;
        q.push(source);

        vector<bool>visited(n,false);

        visited[source]=true;
        while(!q.empty()){
            int current = q.front();
            q.pop();
            if(current == destination) return true;

            for( int neighbour : adj[current]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
    return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna