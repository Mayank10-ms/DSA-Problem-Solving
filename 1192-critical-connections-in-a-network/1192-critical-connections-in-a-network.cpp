
class Solution {
public:
       void dfs(int node, int parent,vector<int>&tin,vector<int>& low,vector<int>& vis, vector<vector<int>>&adj  
        ,vector<vector<int>>&bridges,int& timer){
            vis[node]=1;
            low[node]=tin[node]=timer++;

            for(auto &it : adj[node]){
                if(it==parent) continue;

                if(!vis[it]){
                    dfs(it,node,tin,low,vis,adj,bridges,timer);

                    low[node]=min(low[node],low[it]);

                    if(low[it]>tin[node]){
                        bridges.push_back({node,it});
                    }
                } 
                else{
                        low[node]=min(low[node],tin[it]);
                    }
                }
            }
        
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        vector<int>tin(n,-1);
        vector<int>low(n,-1);
        vector<int>vis(n,0);

        for(auto &edge : connections){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        vector<vector<int>>bridges;
        int timer =0;
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(i,-1,tin,low,vis,adj,bridges,timer);
            }
        }
     return bridges;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna