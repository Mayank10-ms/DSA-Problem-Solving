class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {

        vector<vector<pair<int,double>>>adj(n);
        vector<double>maxProb(n,0.0);

        priority_queue<pair<double,int>>pq;

        for(int i =0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            double p = succProb[i];

            adj[u].push_back({v, p});
            adj[v].push_back({u, p});

        }

        maxProb[start_node]=1.0;

        pq.push({1.0,start_node});


        while(!pq.empty()){
            auto[prob,node]=pq.top();
            pq.pop();
            
            if(prob<maxProb[node]) continue;

            for(auto it : adj[node]){
                int neighbour = it.first;
                double edgeProb = it.second;

                double newProb = prob * edgeProb;

                if(newProb>maxProb[neighbour]){
                    maxProb[neighbour]= newProb;
                    pq.push({newProb,neighbour});
                }
            }
        }
        return maxProb[end_node];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna