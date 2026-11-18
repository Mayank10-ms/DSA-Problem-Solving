class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<vector<int>>rev(n);
        vector<int>outdegree(n,0);
        vector<int>safe;

        queue<int>q;

        for(int u =0;u<n;u++){
            outdegree[u]=graph[u].size();
            

            for(int v : graph[u]){
                rev[v].push_back(u);
            }
        }

         for(int i =0;i<n;i++){
                if(outdegree[i]==0){
                    q.push(i);
                }
            }

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            safe.push_back(curr);           

            for(int prev : rev[curr]){
                outdegree[prev]--;

                if(outdegree[prev]==0){
                    q.push(prev);
                }
            }
        }
     sort(safe.begin(),safe.end());
     return safe;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna