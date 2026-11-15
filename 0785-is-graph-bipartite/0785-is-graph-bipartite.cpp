class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        queue<int>q;

        vector<int>color(n,-1);
        for(int i =0;i<n;i++){
            if(color[i]==-1){
                color[i]=0;
                q.push(i);

            while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int neighbour : graph[node]){
                if(color[neighbour]==-1){
                color[neighbour]= 1- color[node];
                q.push(neighbour);
                }
                else  if ( color[neighbour]==color[node]){
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